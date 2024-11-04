#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card {
private:
    std::string suit;
    int value;

public:

    Card(const std::string& suit, int value);// constructor cu parametri
    int getValue() const;// getter pentru valoarea cartii
    std::string getSuit() const;// getter pentru suit-ul cartii
    friend std::ostream& operator<<(std::ostream& os, const Card& card);// operator de afisare
};

#endif // CARD_H
