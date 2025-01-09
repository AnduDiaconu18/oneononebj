#ifndef SINGLETONDECK_H
#define SINGLETONDECK_H

#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <random>
#include "Card.h"

/**
 * @class SingletonDeck
 * @brief A Singleton class for managing a single instance of Deck.
 */
class SingletonDeck {
private:
    static std::shared_ptr<SingletonDeck> instance; ///< Singleton instance of the Deck.
    std::vector<Card> cards; ///< Collection of cards in the deck.

    SingletonDeck(); ///< Private constructor to enforce Singleton.

    void initializeDeck();

public:
    static std::shared_ptr<SingletonDeck> getInstance();
    void shuffle();
    Card dealCard();
    size_t remainingCards() const;
};

#endif // SINGLETONDECK_H
