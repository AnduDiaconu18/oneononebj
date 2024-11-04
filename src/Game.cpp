#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Game.h"
#include <iostream>

// constructor care initializeaza jocul cu numele jucatorului
Game::Game(const std::string& playerName) : player(playerName), dealer("Dealer") {
    deck.shuffle();
}

// simulare runda de joc
void Game::playRound() {
    player.addCard(deck.dealCard());
    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());

    std::cout << player << "\n";
    std::cout << dealer << "\n";
}

// Determină câștigătorul rundei
void Game::determineWinner() {
    int playerScore = player.calculateScore();
    int dealerScore = dealer.calculateScore();

    std::cout << "Player Score: " << playerScore << "\n";
    std::cout << "Dealer Score: " << dealerScore << "\n";

    if (playerScore > dealerScore) {
        std::cout << player.getName() << " wins!\n";
    } else if (playerScore < dealerScore) {
        std::cout << dealer.getName() << " wins!\n";
    } else {
        std::cout << "It's a tie!\n";
    }
}
