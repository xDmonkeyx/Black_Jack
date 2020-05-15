//todo: add includes
#include "cards.h"
#include "common.h"
//todo add #ifndef


class deck{
    private:
        card cards_[CARDS_IN_DECK];
        int num_cards_;

    public:
        deck();
        ~deck();
        card* Get_Card(int x);
        void Initialize_Deck();

};