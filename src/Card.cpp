#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Card.h"

// Constructorul cu parametri pentru Card
Card::Card(const std::string& suit, int value) : suit(suit), value(value) {}

// Returnează valoarea cărții
int Card::getValue() const {
    return value;
}

// Returnează simbolul cărții
std::string Card::getSuit() const {
    return suit;
}

// Operator de afișare pentru Card
std::ostream& operator<<(std::ostream& os, const Card& card) {
    os << card.suit << " " << card.value;
    return os;
}
