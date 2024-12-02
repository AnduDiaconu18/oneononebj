/**
* @file Deck.h
 * @brief This file defines the Deck class, which represents a deck of playing cards.
 */

#ifndef DECK_H
#define DECK_H

#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"

/**
 * @class Deck
 * @brief Represents a deck of playing cards with functionality to shuffle and deal cards.
 */
class Deck {
private:
 std::vector<Card> cards; ///< Collection of cards in the deck.

 /**
  * @brief Initializes the deck with all 52 playing cards.
  */
 void initializeDeck();

public:
 /**
  * @brief Constructs a new shuffled deck of cards.
  */
 Deck();

 /**
  * @brief Shuffles the cards in the deck.
  */
 void shuffle();

 /**
  * @brief Deals a card from the deck. Throws an exception if the deck is empty.
  * @return The card dealt from the deck.
  * @throws DeckEmptyException if the deck is empty.
  */
 Card dealCard();

 /**
  * @brief Prints the deck's content to the output stream.
  * @param os The output stream.
  * @param deck The deck to print.
  * @return The output stream.
  */
 friend std::ostream& operator<<(std::ostream& os, const Deck& deck);
};

/**
 * @class DeckEmptyException
 * @brief Exception thrown when trying to deal a card from an empty deck.
 */
class DeckEmptyException : public std::exception {
public:
 /**
  * @brief Returns an error message indicating the deck is empty.
  * @return The error message.
  */
 const char* what() const noexcept override {
  return "Deck is empty!";
 }
};

#endif // DECK_H
