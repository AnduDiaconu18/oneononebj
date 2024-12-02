#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Deck.h"

Deck::Deck() {
    initializeDeck();
    shuffle();
}

void Deck::initializeDeck() {
    const std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const std::string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    for (const auto& suit : suits) {
        for (const auto& rank : ranks) {
            cards.emplace_back(suit, rank);
        }
    }
}

void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::dealCard() {
    if (cards.empty()) {
        throw DeckEmptyException();
    }
    Card card = cards.back();
    cards.pop_back();
    return card;
}

std::ostream& operator<<(std::ostream& os, const Deck& deck) {
    for (const auto& card : deck.cards) {
        os << card << "\n";
    }
    return os;
}
