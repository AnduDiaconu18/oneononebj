/**
* @file Game.h
 * @brief Defines the Game class with Blackjack rules.
 */

#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"

class Game {
private:
    Deck deck;
    PlayerBase* player;
    PlayerBase* dealer;

    void setupGame();

public:
    Game(const std::string& playerName);
    void playRound();
    ~Game();
};

#endif // GAME_H
