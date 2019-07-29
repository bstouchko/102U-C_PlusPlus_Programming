/*--------------------------------------------------------------------
 **	 File Name: ex3.cpp
 **
 **  Description: Pointers. An advanced topic.
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

int main(int argc,  char** argv){

    std::cout << "Fun with pointers!" << std::endl;

    int anInt =5;
    std::cout << "anInt =" << anInt << std::endl;

    // Pointers are defined by the asteriks symbol '*'.
    // below is a pointer to an integer.  You can point to any data type.
    // The ampersand '&' denotes 'the memory location of'.  So the line below
    // reads, a pointer to the memory location of.  Bear with me, this will make more
    // sense in a bit.

    // 1. Run the examples.
    // Lets define a pointer to an integer.  It will point to the memory location
    // of anInt, which we defined earlier.
    int* pPtrToAnInt =&anInt;

    // Now lets print out what it is equal to.  It's a memory location.  It won't be
    // pretty.
    std::cout << "pPtrToAnInt =" << pPtrToAnInt << std::endl;

    // Now lets talk about 'dereferencing'.  Once we have a pointer, we can 'dereference'
    // it.  This means, we can see what is inside the memory location.  So if we want to
    // see what int is in the location pointed to by pPtrToAnInt, then we use the asteriks
    // again.
    std::cout << "The value pPtrToAnInt points to =" << *pPtrToAnInt << std::endl;

    int anIntArray[5];
    anIntArray[0] =100;
    anIntArray[1] =200;
    anIntArray[2] =300;
    anIntArray[3] =400;
    anIntArray[4] =500;

    // Now make it point to the array.
    pPtrToAnInt =&anIntArray[0];  // we could also say pPtrToAnInt =anIntArray , its the same thing.

    // After we print we will 'post increment'  that is the '++' sign.  It means increment the pointer
    // after we do the work on it.  When we increment a pointer, it points to the next memory location.
    // The array is setup so its elements are next to each other in memory.
    std::cout << *pPtrToAnInt++ << std::endl;
    std::cout << *pPtrToAnInt++ << std::endl;
    std::cout << *pPtrToAnInt++ << std::endl;
    std::cout << *pPtrToAnInt++ << std::endl;
    std::cout << *pPtrToAnInt++ << std::endl;

    // And here is the danger with pointers.
    // Right now it points to the 6th element.  Well, there is none.  So what will it be?
    // Who knows?  It is undefined.  Let's see what it is.
    std::cout << "undefined pointer =" << *pPtrToAnInt << std::endl;

    // Null pointers can be very problematic.  You have to take care.
    // Setting a pointer to null is a common operation, but it must be checked.  This is how
    // we may tell our program that the pointer is unassigned.
    pPtrToAnInt =0;
    // 2. But if you want to crash things, uncomment the following line.
    std::cout << "null pointer =" << *pPtrToAnInt << std::endl;

    // This is how we would check for it...
    //if(pPtrToAnInt != 0){
        std::cout << "This doesn't get called =" << *pPtrToAnInt << std::endl;
    //}

    // 3. Define and read a pointer to a float.
    

    // 4. Define and read a pointer to a string.
    std::string myTestString ="This is just an example of a string.";


}
