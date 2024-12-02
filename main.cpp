/**
* @file main.cpp
 * @brief Entry point for the Blackjack game. Runs a complete game session.
 */

#include <iostream>
#include <string>
#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Game.h"

int main() {
    std::cout << "Welcome to Blackjack!\n";
    std::cout << "Enter your name: ";
    std::string playerName;
    std::cin >> playerName;

    // Initialize the game with the player's name
    Game game(playerName);

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
