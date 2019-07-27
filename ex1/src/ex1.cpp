/*--------------------------------------------------------------------
 **	 File Name: ex1.cpp
 **
 **  Description:  First example.  Hello World.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

// This include is the library for basic input and output.
 #include <iostream>



// main is the starting point of every program.
// we will learn about argc and argv in the next program.
int main(int argc,  char** argv){

    // 1. Change the text around.
    std::cout << "Hello World" << std::endl;

    // 2. Add another line of text here.

    // 3. Do both on the same line.

    // Here is a simple variable.  It is an unsigned 8 bit integer ( 0 - 255 )
    uint8_t  myAge = 30;

    if(myAge>30) {

        std::cout << "Wow, you're OLD!!" << std::endl;

    }
    else if (myAge==29)
    {
        std::cout << "so close" << std::endl;
    }
    else {
        std::cout << "youth" << std::endl;
    }

    int ourages[5];
    ourages[0] = 12;
    ourages[1] = 34;
    ourages[2] = 56;
    ourages[3] = 78;
    ourages[4] = 90;

    std::cout << ourages[3] << std::endl;
    // 4. Have it print out "My age is 29" (using myAge)

    // 5. Try printing out a floating point number.
    float robotLength =24.568;

    for(int idx =0; idx < 5; idx++) {
        std::cout << ourages[idx] << std::endl;
    }
}
