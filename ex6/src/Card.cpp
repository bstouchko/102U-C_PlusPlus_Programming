/*--------------------------------------------------------------------
 **	 File Name: Card.cpp
 **
 **  Description:  Implementation of a card class.
 **
 **  Author:  Brian Stouchko
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

#include "./Card.h"

Card::Card(int cardId, std::string cardSuit){

    mId     = cardId;
    mSuit   = cardSuit;

    switch(mId){
        case 1:{
            mLabel ="Ace";
            mValue =11; // or 1.  need to allow the user to decide.
            break;
        }
        case 2:{
            mLabel ="Two";
            mValue =2;
            break;
        }
        case 3:{
            mLabel ="Three";
            mValue =3;
            break;
        }
        case 4:{
            mLabel ="Four";
            mValue =4;
            break;
        }
        case 5:{
            mLabel ="Five";
            mValue =5;
            break;
        }
        case 6:{
            mLabel ="Six";
            mValue =6;
            break;
        }
        case 7:{
            mLabel ="Seven";
            mValue =7;
            break;
        }
        case 8:{
            mLabel ="Eight";
            mValue =8;
            break;
        }
        case 9:{
            mLabel ="Nine";
            mValue =9;
            break;
        }
        case 10:{
            mLabel ="Ten";
            mValue =10;
            break;
        }
        case 11:{
            mLabel ="Jack";
            mValue =10;
            break;
        }
        case 12:{
            mLabel ="Queen";
            mValue =10;
            break;
        }
        case 13:{
            mLabel ="King";
            mValue =10;
            break;
        }
        default:{
            mLabel = "Unknown";
            mValue =0;
            break;
        }
    }

    mName =mLabel + " of " + mSuit;
}

Card::~Card(){
    // Nothing really to do.
}

