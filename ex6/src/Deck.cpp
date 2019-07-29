/*--------------------------------------------------------------------
 **	 File Name: Deck.cpp
 **
 **  Description:  Implementation of a collection of cards.
 **
 **  Author:  Brian Stouchko
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

#include "Deck.h"
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

Deck::Deck(){
    for( int cardNum =1; cardNum<=13; cardNum++ ){
        mPile.push_back(Card(cardNum,"Hearts"));
    }

    for( int cardNum =1; cardNum<=13; cardNum++ ){
        mPile.push_back(Card(cardNum,"Spades"));
    }

    for( int cardNum =1; cardNum<=13; cardNum++ ){
        mPile.push_back(Card(cardNum,"Clubs"));
    }

    for( int cardNum =1; cardNum<=13; cardNum++ ){
        mPile.push_back(Card(cardNum,"Diamonds"));
    }
}

Deck::~Deck(){}

void
Deck::DoShuffle(){
    // Initialize seed randomly using the time
    srand(time(0));

    int currentSizeOfDeck =mPile.size();

    std::list<Card>::iterator itemOne  =mPile.begin();
    std::list<Card>::iterator itemTwo  =mPile.begin();

    // @todo fix problem with the shuffle.

    for( int i=0; i<currentSizeOfDeck; i++ ){
        // Randomize.
        int r = i + (rand() % (currentSizeOfDeck -i));

        itemOne  =mPile.begin();
        std::advance(itemOne, i);

        itemTwo  =mPile.begin();
        std::advance(itemTwo, r);

        std::swap(*itemOne, *itemTwo);
    }
}

void
Deck::Cut(void){
    int cardsRemain =mPile.size();

    if(cardsRemain > 0){
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator (seed);
        std::uniform_real_distribution<double> distribution (1,cardsRemain);

        double dblCutPoint =distribution(generator);
        int cutPoint =(int)dblCutPoint;

        // The cutpoint to the end becomes the start.
        // beginning to cutpoint is tacked to the end.
        std::list<Card>::iterator cardIt = mPile.begin();
        std::advance(cardIt,cutPoint);
        mPile.splice ( mPile.begin(), mPile, cardIt, mPile.end());
    }
}

Card
Deck::Deal(void){
    Card newCard =mPile.front();
    mPile.pop_front();
    return newCard;
}

bool
Deck::isEmpty(){
    return mPile.empty();
}
