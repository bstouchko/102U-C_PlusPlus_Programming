/*--------------------------------------------------------------------
 **	 File Name: ex4.cpp
 **
 **  Description: Program input and output.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

// This include is the library for basic input and output.
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>       /* time */

int
main(int argc,  char** argv){
    std::string name ="";

    int myNumber =0;
    int yourNumber =0;

    std::cout << "Let's try some input and output!" << std::endl;


    puts("Enter your name: ");

    // getline accepts all keys pressed until the user presses enter.
    getline(std::cin, name);

    std::cout << "Hello " << name << ". Lets play a game." << std::endl;
    puts("Pick a number from 1 to 100: ");

    // a library function.  This "seeds" the random number generator with a random
    // number so it is truely random.  The seed in this case is the time.
    srand (time(NULL));
    // The % in this case is doing 'modulo math'.  This simply means it will take the random
    // number, divide it by 100 and give you the remainder.  This will give us 0-99.
    // We add 1 so we will have 1 - 100.
    myNumber = rand() % 100 + 1;

    // Hey a do/while.  This executes the code between the brackets so long as while
    // evaluates true.  Use this if you want the code to run at least once, but maybe more.
    do{
        scanf("%d",&yourNumber);  // The scanf is yet another way to get input from the keyboard.

        // Here's an 'if'.  Do things between the brackets if the evaluation is true.
        if( yourNumber < myNumber ){
            // put string is yet another way of showing output to the monitor.
            puts ("Your number is too low.");
            printf("Guess again: "); // Yet another way to print to the screen.
        }
        else
        if(yourNumber > myNumber){
            puts ("Your number is too high.");
            printf("Guess again: "); // Yet another way to print to the screen.
        }

    }while( yourNumber != myNumber); // Whoa, the ! means not.  In this case, not equal.

    // Using printf, we can format the string to show numbers using %d.  This is used more in
    // c programs.
    printf( "Congratulations! %d is correct.\n", yourNumber); // \n means newline.

    std::cout << "Now go and do something helpful." << std::endl;
}
