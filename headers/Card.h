#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card {
private:
    std::string suit;
    int value;

public:
    // Constructor cu parametri
    Card(const std::string& suit, int value);

    // Getter pentru valoarea cărții
    int getValue() const;

    // Getter pentru suit-ul cărții
    std::string getSuit() const;

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Card& card);
};

#endif // CARD_H
