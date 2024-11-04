#ifndef DECK_H
#define DECK_H

#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"

class Deck {
private:
    std::vector<Card> cards;


    void initializeDeck();// functia de inițializare a pachetului de carti

public:

    Deck();// constructor care initializeaza si amesteca pachetul de carti
    void shuffle();// functie de amestecare a cartilor
    Card dealCard();// functie care imparte o carte din pachet
    friend std::ostream& operator<<(std::ostream& os, const Deck& deck);// operator de afisare
};

#endif // DECK_H
