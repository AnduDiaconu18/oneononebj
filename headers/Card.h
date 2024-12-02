/**
* @file Card.h
 * @brief This file defines the Card class, which represents a playing card with a suit and a value.
 */

#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

/**
 * @class Card
 * @brief Represents a playing card with a suit and value.
 */
class Card {
private:
 std::string suit; ///< Suit of the card (e.g., Hearts, Spades)
 std::string rank; ///< Rank of the card (e.g., 2, 3, ..., J, Q, K, A)

public:
 /**
  * @brief Constructs a Card with the specified suit and rank.
  * @param suit The suit of the card.
  * @param rank The rank of the card.
  */
 Card(const std::string& suit, const std::string& rank);

 /**
  * @brief Gets the value of the card for scoring in Blackjack.
  * @return The value of the card.
  */
 int getValue() const;

 /**
  * @brief Gets the suit of the card.
  * @return The suit of the card.
  */
 std::string getSuit() const;

 /**
  * @brief Gets the rank of the card.
  * @return The rank of the card.
  */
 std::string getRank() const;

 /**
  * @brief Prints the card information to the output stream.
  * @param os The output stream.
  * @param card The card to print.
  * @return The output stream.
  */
 friend std::ostream& operator<<(std::ostream& os, const Card& card);
};

#endif // CARD_H
