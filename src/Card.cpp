#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Card.h"


Card::Card(const std::string& suit, int value) : suit(suit), value(value) {}// constructor cu parametri pentru Card

int Card::getValue() const {
    return value;
}// returnează valoarea cartii

std::string Card::getSuit() const {
    return suit;
}// returnează simbolul cartii

std::ostream& operator<<(std::ostream& os, const Card& card) {
    os << card.suit << " " << card.value;
    return os;
}// operator de afisare pentru Card
