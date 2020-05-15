#include <cstring>
#include <iostream>
#include "cards.h"
#include "common.h"

//using namespace std;

card::card(short card_val, char* suit):
    card_val_(card_val), suit_(suit) 
{
    //default each card to FALSE b/c card is still in the deck
    in_use_ = FALSE;
}

short card::Get_Card_Val()
{
    return card_val_;
}

char* card::Get_Card_Suit()
{
    return suit_;
}

void card::Set_Card(short card_val, char* suit)
{
    card_val_ = card_val;
    suit_ = suit;
}

void card::Set_Card_In_Use(bool in_use)
{
    in_use_ = in_use;
}