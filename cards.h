//add includes 
#include <iostream>
#include <cstring>

using namespace std;

#ifndef CARDS_H
#define CARDS_H

class card{
    private:
        short card_val_; //1-13
        char* suit_;     //4 suits
        bool  in_use_;   //TRUE if card is already in use. FALSE if still in deck
    public:

    //default constructor
    card() = default;

    //constructor with inputs. Constructor initialization list
    card(short card_val, char* suit);

    short Get_Card_Val();
    char* Get_Card_Suit();
    void  Set_Card(short card_val, char* suit);
    void  Set_Card_In_Use(bool in_use);
};

#endif