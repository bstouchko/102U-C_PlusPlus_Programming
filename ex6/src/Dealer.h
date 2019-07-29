/*--------------------------------------------------------------------
 **	 File Name: Dealer.h
 **
 **  Description:  Advanced programming tutorial for FRC102.
 **
 **  Author:  Brian Stouchko
 **
 **  Creation Date: 06/13/2019
 **
 **--------------------------------------------------------------------
 */

#ifndef DEALER_H
#define DEALER_H

#include "Deck.h"


class Dealer{
    public:
        /**
         * Default constructor.
         */
        Dealer();

        /**
         * A more personalized constructor.
         */
        Dealer(std::string name);

        /**
         * Default destructor.
         */
        ~Dealer(void);

        /**
         * Gets a new full deck.
         *
         * @returns pointer to the new deck.
         */
        Deck* GetNewDeck(void);

        /**
         * Deal a card from the front of the deck
         */
        Card Deal(void);

        /**
         * shuffle the cards in the deck.
         */
        void ShuffleDeck(void);

        /**
         * Cut the cards in the deck.
         */
        void CutDeck(void);

    private:
        Deck* mpActiveDeck;   ///< The current deck of cards.
        std::string mName;  ///< The name of the Dealer.
};

#endif // DEALER_H
