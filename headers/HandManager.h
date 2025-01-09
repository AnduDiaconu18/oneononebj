#ifndef HANDMANAGER_H
#define HANDMANAGER_H

#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Card.h"

/**
 * @class HandManager
 * @brief Template class for managing collections of cards.
 * @tparam T Type of player or container.
 */
template <typename T>
class HandManager {
private:
    T& player; ///< Reference to the player object.

public:
    HandManager(T& player) : player(player) {}

    void addCardToHand(const Card& card) { player.addCard(card); }
    void resetHand() { player.resetHand(); }
    int getScore() const { return player.calculateScore(); }
};

#endif // HANDMANAGER_H
