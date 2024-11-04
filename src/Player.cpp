#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Player.h"


Player::Player(const std::string& name) : name(name) {}// constructor care initializeaza jucatorul cu un nume

void Player::addCard(const Card& card) {
    hand.push_back(card);
}// adauga o carte în mâna jucatorului

int Player::calculateScore() const {
    int score = 0;
    for (const auto& card : hand) {
        score += card.getValue();
    }
    return score;
}// Calculeaza scorul curent al jucatorului

std::string Player::getName() const {
    return name;
}// returneaza numele jucatorului

std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << player.name << "'s hand:\n";
    for (const auto& card : player.hand) {
        os << card << "\n";
    }
    os << "Score: " << player.calculateScore() << "\n";
    return os;
}// operator de afisare pentru jucator
