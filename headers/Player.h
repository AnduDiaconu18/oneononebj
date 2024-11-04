#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Card.h"

class Player {
private:
    std::string name;
    std::vector<Card> hand;

public:
    // Constructor cu parametri
    Player(const std::string& name);

    // Adaugă o carte în mâna jucătorului
    void addCard(const Card& card);

    // Calculează scorul curent al jucătorului
    int calculateScore() const;

    // Getter pentru numele jucătorului
    std::string getName() const;

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Player& player);
};

#endif // PLAYER_H
