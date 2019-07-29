/*--------------------------------------------------------------------
 **	 File Name: Dealer.cpp
 **
 **  Description:  Advanced programming tutorial for FRC102.
 **
 **  Author:  Brian Stouchko
 **
 **  Creation Date: 06/13/2019
 **
 **--------------------------------------------------------------------
 */

#include "Dealer.h"


Dealer::Dealer():
    mName("The Dealer"),
    mpActiveDeck(0){

}

Dealer::Dealer(std::string name):
    mName(name),
    mpActiveDeck(0){

}

Dealer::~Dealer(){
    if(mpActiveDeck != 0){
        delete mpActiveDeck;
    }
}

Deck*
Dealer::GetNewDeck(){
    if(mpActiveDeck){
        delete mpActiveDeck;
    }
    mpActiveDeck =new Deck();

    return mpActiveDeck;
}

Card
Dealer::Deal(){
    return mpActiveDeck->Deal();
}

void
Dealer::ShuffleDeck(){
    mpActiveDeck->DoShuffle();
}

void
Dealer::CutDeck(){
    mpActiveDeck->Cut();
}
