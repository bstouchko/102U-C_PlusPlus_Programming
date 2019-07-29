/*--------------------------------------------------------------------
 **	 File Name: ex2.cpp
 **
 **  Description: Passing in variables to your program.
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

    // std means use the standard libary. cout means print to the output (or screen).
    std::cout << "Hello Person!" << std::endl;
    // endl means end line (or start a new line).

    // so...  argc is an int or a number, and it tells us how many 'arguements' are on the
    // command line.  An arguement is simply something you type on the command line after
    // you type your program.  For example: if your program was called 'myName' you would
    // type ./myName Brian
    // If you did this, you should expect to see argc = 2.  the first arg is always the
    // name of the program. argv is a pointer to a pointer.  Wow, you thought pointers were
    // complex.  Now there's a pointer to a pointer.  Don't worry about this for now.  All we
    // need to know is that this is essencially a list of strings.  So if argv was shown as an
    // array (which it can) we can think of each array element containing a string.  So argv[]
    // would contain myName as argv[0] and Brian as argv[1].  Lets test it out.
    std::string strMyName ="";

    // This simply checks to see if the user entered their name.  If they didn't, it would
    // crash the program otherwise.  If you want to test it, just comment out the if below.
    if(argc>1){
        strMyName =argv[1];
    }

    std::cout << "No really.  My name is " << strMyName << std::endl;
}
