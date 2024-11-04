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

    Player(const std::string& name);// constructor cu parametri
    void addCard(const Card& card);// adauga o carte in mana jucatorului
    int calculateScore() const;// calculeaza scorul curent al jucatorului
    std::string getName() const;// getter pentru numele jucatorului
    friend std::ostream& operator<<(std::ostream& os, const Player& player);// operator de afisare
};

#endif // PLAYER_H
