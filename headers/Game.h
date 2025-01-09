#ifndef GAME_H
#define GAME_H

#include "SingletonDeck.h"
#include "Observer.h"
#include "Player.h"

/**
 * @class Game
 * @brief The main game logic for Blackjack.
 */
class Game : public GameNotifier {
private:
    std::shared_ptr<SingletonDeck> deck; ///< Shared instance of the deck.
    PlayerBase* player; ///< Human player.
    PlayerBase* dealer; ///< Dealer AI.

    void setupGame();

public:
    Game(const std::string& playerName);
    void playRound();
    ~Game();
};

#endif // GAME_H
