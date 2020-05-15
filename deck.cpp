#include <iostream>
#include <cstring>

#include "deck.h"
#include "cards.h"
#include "common.h"

deck::deck() {}

deck::~deck() {}

card* deck::Get_Card(int x)
{
    return &cards_[x];
}

void deck::Initialize_Deck()
{
    int i,j;

    for( i = ACE-1; i < KING; i++)
    {
        for (j = 0; j < NUM_SUITS; j++)
        {
            cards_[i+j].Set_Card(i+1, SUIT_STRINGS[j,0]);
        }
    }
}