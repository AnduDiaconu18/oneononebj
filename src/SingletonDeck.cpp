#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\SingletonDeck.h"

std::shared_ptr<SingletonDeck> SingletonDeck::instance = nullptr;

SingletonDeck::SingletonDeck() {
    initializeDeck();
    shuffle();
}

void SingletonDeck::initializeDeck() {
    const std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const std::string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    for (const auto& suit : suits) {
        for (const auto& rank : ranks) {
            cards.emplace_back(suit, rank);
        }
    }
}

std::shared_ptr<SingletonDeck> SingletonDeck::getInstance() {
    if (!instance) {
        instance = std::shared_ptr<SingletonDeck>(new SingletonDeck);
    }
    return instance;
}

void SingletonDeck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card SingletonDeck::dealCard() {
    if (cards.empty()) {
        throw std::runtime_error("Deck is empty!");
    }
    Card card = cards.back();
    cards.pop_back();
    return card;
}

size_t SingletonDeck::remainingCards() const {
    return cards.size();
}
