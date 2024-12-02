#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Card.h"

Card::Card(const std::string& suit, const std::string& rank) : suit(suit), rank(rank) {}

int Card::getValue() const {
 if (rank == "J" || rank == "Q" || rank == "K") {
  return 10;
 } else if (rank == "A") {
  return 11; // Default value for Ace; handled later in scoring logic.
 } else {
  return std::stoi(rank); // Convert rank to integer for 2-10.
 }
}

std::string Card::getSuit() const {
 return suit;
}

std::string Card::getRank() const {
 return rank;
}

std::ostream& operator<<(std::ostream& os, const Card& card) {
 os << card.rank << " of " << card.suit;
 return os;
}
