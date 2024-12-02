#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Player.h"

PlayerBase::PlayerBase(const std::string& name) : name(name) {}

void PlayerBase::addCard(const Card& card) {
    hand.push_back(card);
}

void PlayerBase::resetHand() {
    hand.clear();
}

int PlayerBase::calculateScore() const {
    int score = 0;
    int aceCount = 0;

    for (const auto& card : hand) {
        score += card.getValue();
        if (card.getRank() == "A") {
            aceCount++;
        }
    }

    // Adjust Ace value if score exceeds 21
    while (score > 21 && aceCount > 0) {
        score -= 10; // Treat Ace as 1 instead of 11
        aceCount--;
    }

    return score;
}

bool PlayerBase::isBust() const {
    return calculateScore() > 21;
}

std::string PlayerBase::getName() const {
    return name;
}

std::ostream& operator<<(std::ostream& os, const PlayerBase& player) {
    os << player.name << "'s hand:\n";
    for (const auto& card : player.hand) {
        os << card << "\n";
    }
    os << "Score: " << player.calculateScore() << "\n";
    return os;
}
