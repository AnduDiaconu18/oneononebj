#ifndef DECK_H
#define DECK_H

#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"

class Deck {
private:
    std::vector<Card> cards;

    // Funcția de inițializare a pachetului de cărți
    void initializeDeck();

public:
    // Constructor care inițializează și amestecă pachetul de cărți
    Deck();

    // Funcție de amestecare a cărților
    void shuffle();

    // Funcție care împarte o carte din pachet
    Card dealCard();

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Deck& deck);
};

#endif // DECK_H
