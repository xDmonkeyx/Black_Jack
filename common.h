#include <cstring>

#ifndef COMMON_H
#define COMMON_H

#define TRUE  1
#define FALSE 0

#define CARDS_IN_DECK 52
#define NUM_SUITS     4

enum{
    ACE          = 1,
    TWO          = 2,
    THREE        = 3,
    FOUR         = 4,
    FIVE         = 5,
    SIX          = 6,
    SEVEN        = 7,
    EIGHT        = 8,
    NINE         = 9,
    TEN          = 10,
    JACK         = 11,
    QUEEN        = 12,
    KING         = 13,
    INVALID_CARD = 14
}card_ints;


#define HEARTS   "Hearts"
#define SPADES   "Spades"
#define CLUBS    "Clubs"
#define DIAMONDS "Diamonds"

const char SUIT_STRINGS[4][10] = {HEARTS, SPADES, CLUBS, DIAMONDS};

#endif