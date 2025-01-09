/**
* @file main.cpp
 * @brief Entry point for the Blackjack game. Runs a complete game session.
 */

#include <iostream>
#include <string>
#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Game.h"
#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Observer.h"

/**
 * @class ConsoleObserver
 * @brief A concrete implementation of the Observer pattern that outputs messages to the console.
 */
class ConsoleObserver : public Observer {
public:
    void notify(const std::string& message) override {
        std::cout << "[Notification]: " << message << std::endl;
    }
};

int main() {
    std::cout << "Welcome to Blackjack!\n";
    std::cout << "Enter your name: ";
    std::string playerName;
    std::cin >> playerName;

    // Create the game
    Game game(playerName);

    // Attach an observer for notifications
    ConsoleObserver consoleObserver;
    game.addObserver(&consoleObserver);

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        std::cout << "\nStarting a new round...\n";
        game.playRound();

        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> playAgain;
    }

    std::cout << "\nThank you for playing Blackjack! Goodbye, " << playerName << "!\n";
    return 0;
}
