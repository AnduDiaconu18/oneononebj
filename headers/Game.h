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
    // Constructor care inițializează jocul cu numele jucătorului
    Game(const std::string& playerName);

    // Joacă o rundă de joc
    void playRound();

    // Determină câștigătorul rundei
    void determineWinner();
};

#endif // GAME_H
