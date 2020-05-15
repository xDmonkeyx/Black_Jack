#include <iostream>
#include <cstring>

#include "cards.h"
#include "common.h"

int main(void)
{
    char my_card_suit[10]     = "hearts";
    char my_card_new_suit[10] = "spades";
    card my_card(1, my_card_suit);

    std::cout << "My card is: " << my_card.Get_Card_Val() << " " << my_card.Get_Card_Suit() << std::endl;

    my_card.Set_Card(3, my_card_new_suit);

    std::cout << "My card is: " << my_card.Get_Card_Val() << " " << my_card.Get_Card_Suit() << std::endl;

    std::cout << "Suit: " << SUIT_STRINGS[0] << std::endl;

    return 0;
}