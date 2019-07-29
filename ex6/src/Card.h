/*--------------------------------------------------------------------
 **	 File Name: Card.h
 **
 **  Description:  Advanced programming tutorial for FRC102.
 **
 **  Author:  Brian Stouchko
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

#ifndef CARD_H
#define CARD_H

#include <string>

/**
 * Defines a card object.
 *
 */
class Card{
    public:
        /**
         * Parameterized constructor
         * @param[in] cardId identifier of this suit. 1-13
         * @param[in] cardSuit is it Hearts, clubs, etc...
         */
        Card(int cardId, std::string cardSuit);

        /**
         * Default destructor
         */
	    ~Card(); // This is a destructor.  It gets called when the class is deleted.

        // Inline Getters....  These are special and lightweight.  Like a macro. (sort of)
        // The const keyword means the user can't change the variable.  It's a playing card.
        // You can't change it!

        /**
         * Gets the Label of the card.
         */
        inline std::string GetLabel()const{return mLabel;}

        /**
         * Gets the Suit
         */
        inline std::string GetSuit()const{return mSuit;}

        /**
         * Gets the value of the card.
         */
        inline int GetValue()const{return mValue;}

        /**
         * Gets the common name in the form of "Ace of Hearts".
         *
         */
        inline std::string GetName()const{return mName;}

    private:
        /**
         * Default Constructor.  Every class has a default constructor.
         * We don't want the user creating anonomous cards, so we define
         * it as private.  This way, no one can call the default constructor.
         * It forces them to use a parameterized one.
         */
        Card(){};

        int mId;            ///< A card identifier.  1-13
        std::string mLabel; ///< A Card label name. A - K
        std::string mSuit;  ///< A suit ("Heart, Spade, Club, Diamond")
        int mValue;         ///< Value of the card 1-10
        std::string mName;  ///< Common name of the card.
};

#endif // CARD_H
