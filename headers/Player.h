/**
* @file Player.h
 * @brief This file defines the PlayerBase class and its derived classes: HumanPlayer and AIPlayer.
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Card.h"

/**
 * @class PlayerBase
 * @brief Abstract base class representing a generic player in the game.
 */
class PlayerBase {
protected:
    std::string name; ///< Name of the player.
    std::vector<Card> hand; ///< Cards in the player's hand.

public:
    PlayerBase(const std::string& name);
    virtual void addCard(const Card& card);
    virtual void resetHand();
    virtual int calculateScore() const; ///< Updated to handle Ace logic.
    virtual std::string getName() const;
    virtual bool isBust() const; ///< Checks if the player has exceeded 21.
    virtual ~PlayerBase() = default;
    friend std::ostream& operator<<(std::ostream& os, const PlayerBase& player);
};

/**
 * @class HumanPlayer
 * @brief Represents a human-controlled player.
 */
class HumanPlayer : public PlayerBase {
public:
    HumanPlayer(const std::string& name) : PlayerBase(name) {}
};

/**
 * @class AIPlayer
 * @brief Represents an AI-controlled player.
 */
class AIPlayer : public PlayerBase {
public:
    AIPlayer(const std::string& name) : PlayerBase(name) {}
};

#endif // PLAYER_H
