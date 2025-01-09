#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Game.h"
#include <iostream>

Game::Game(const std::string& playerName) {
    deck = SingletonDeck::getInstance();
    player = new HumanPlayer(playerName);
    dealer = new AIPlayer("Dealer");
}

void Game::setupGame() {
    player->resetHand();
    dealer->resetHand();
}

void Game::playRound() {
    setupGame();
    notifyAll("Game started!");

    player->addCard(deck->dealCard());
    player->addCard(deck->dealCard());
    dealer->addCard(deck->dealCard());

    std::cout << *player << std::endl;

    while (!player->isBust()) {
        std::cout << "Hit or Stand? (h/s): ";
        char choice;
        std::cin >> choice;

        if (choice == 'h') {
            player->addCard(deck->dealCard());
            std::cout << *player << std::endl;
        } else {
            break;
        }
    }

    if (player->isBust()) {
        std::cout << player->getName() << " busts! Dealer wins!\n";
        return;
    }

    std::cout << *dealer << std::endl;

    while (dealer->calculateScore() < 17) {
        dealer->addCard(deck->dealCard());
        std::cout << *dealer << std::endl;
    }

    if (dealer->isBust()) {
        std::cout << "Dealer busts! " << player->getName() << " wins!\n";
        return;
    }

    int playerScore = player->calculateScore();
    int dealerScore = dealer->calculateScore();

    if (playerScore > dealerScore) {
        std::cout << player->getName() << " wins!\n";
    } else if (playerScore < dealerScore) {
        std::cout << "Dealer wins!\n";
    } else {
        std::cout << "It's a tie!\n";
    }
}

Game::~Game() {
    delete player;
    delete dealer;
}
