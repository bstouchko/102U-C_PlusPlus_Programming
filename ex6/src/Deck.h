/*--------------------------------------------------------------------
 **	 File Name: Deck.h
 **
 **  Description:  Advanced programming tutorial for FRC102.
 **
 **  Author:  Brian Stouchko
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

#ifndef DECK_H
#define DECK_H

// Let's include the course file because we will need to contain them.
#include "Card.h"
#include <list>

/**
 * This is a deck of cards.
 * It manages what cards have been dealt etc...
 */
class Deck{
    public:
        /**
         * Standard constructor
         */
        Deck();

        /**
         * Destructor
         */
        ~Deck();

        /**
         * Randomize the deck.
         */
        void DoShuffle(void);

        /**
         * Cut the deck at a random spot.
         */
        void Cut(void);

        /**
         * Deal a card from the deck.
         * This removes the card from the deck.
         * When the deck is empty it will return a
         * null card.
         */
        Card Deal(void);

        /**
         * Check to see if all the cards have been dealt.
         */
        bool isEmpty(void);

    private:
        std::list<Card> mPile;   ///< This is the collection of cards.

};

#endif // DECK_H
