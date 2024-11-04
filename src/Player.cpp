#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Player.h"

// Constructorul inițializează un jucător cu un nume
Player::Player(const std::string& name) : name(name) {}

// Adaugă o carte în mâna jucătorului
void Player::addCard(const Card& card) {
    hand.push_back(card);
}

// Calculează scorul curent al jucătorului
int Player::calculateScore() const {
    int score = 0;
    for (const auto& card : hand) {
        score += card.getValue();
    }
    return score;
}

// Returnează numele jucătorului
std::string Player::getName() const {
    return name;
}

// Operator de afișare pentru Player
std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << player.name << "'s hand:\n";
    for (const auto& card : player.hand) {
        os << card << "\n";
    }
    os << "Score: " << player.calculateScore() << "\n";
    return os;
}
