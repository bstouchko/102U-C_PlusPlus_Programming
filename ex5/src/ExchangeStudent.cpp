/*--------------------------------------------------------------------
 **	 File Name: ExchangeStudent.cpp
 **
 **  Description: This is the implementaiton of a type of
 **               Student.  The ExchangeStudent.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */
// This is the code that tells a ExchangeStudent how to do ExchangeStudent things...

#include <iostream>


// Here we will define all the code we outlined in the header...
#include "ExchangeStudent.h"

// This is the default constructor.  We need to call the base class constructor too.
ExchangeStudent::ExchangeStudent() :
    Student(){
    mName ="unknown";  // initialize the name.  We don't know it.  We should use the next constructor.
}


ExchangeStudent::ExchangeStudent(std::string newName) :
    Student(newName){
    // mName =newName;  No need to do this as it will be done in the base class.
}

ExchangeStudent::~ExchangeStudent(){

}

void
ExchangeStudent::SayHello(){
    std::cout << "Hola. Mi nombre es " << mName << "." << std::endl;
}

