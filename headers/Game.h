#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"

class Game {
private:
    Deck deck;
    Player player;
    Player dealer;

public:

    Game(const std::string& playerName);// constructor care initializeaza jocul cu numele jucatorului
    void playRound();// joaca o runda
    void determineWinner();// determina castigatorul rundei
};

#endif // GAME_H
