
// This include is the library for basic input and output.
#include <iostream>

#include "Dealer.h"

int main(int argc,  char** argv){

    Dealer GameDealerJoe("Joe");

    GameDealerJoe.GetNewDeck();
    GameDealerJoe.CutDeck();
    GameDealerJoe.ShuffleDeck();
    GameDealerJoe.CutDeck();

   std::cout << "Dealer deals two cards to player 1." << std::endl;

    int playerTotal =0;
    Card dealtCard1 =GameDealerJoe.Deal();
    playerTotal +=dealtCard1.GetValue();
    Card dealtCard2 =GameDealerJoe.Deal();
    playerTotal +=dealtCard2.GetValue();

    printf("Player 1 has: %s and %s = %d\n",
        (const char*)(dealtCard1.GetName().c_str()),
        (const char*)(dealtCard2.GetName().c_str()),
        playerTotal);

    int dealerTotal =0;
    Card houseCard1 =GameDealerJoe.Deal();
    dealerTotal +=houseCard1.GetValue();
    Card houseCard2 =GameDealerJoe.Deal();
    dealerTotal +=houseCard2.GetValue();

    printf("Dealer is showing: %s",
        (const char*)(houseCard1.GetName().c_str()));



}


