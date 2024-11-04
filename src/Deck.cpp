#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Deck.h"

// Constructorul inițializează și amestecă pachetul de cărți
Deck::Deck() {
    initializeDeck();
    shuffle();
}

// Funcția de inițializare a pachetului de cărți
void Deck::initializeDeck() {
    const std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    for (const auto& suit : suits) {
        for (int value = 1; value <= 13; ++value) {
            cards.emplace_back(suit, value);
        }
    }
}

// Funcția de amestecare a cărților
void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

// Împarte o carte și o elimină din pachet
Card Deck::dealCard() {
    Card card = cards.back();
    cards.pop_back();
    return card;
}

// Operator de afișare pentru Deck
std::ostream& operator<<(std::ostream& os, const Deck& deck) {
    for (const auto& card : deck.cards) {
        os << card << "\n";
    }
    return os;
}
