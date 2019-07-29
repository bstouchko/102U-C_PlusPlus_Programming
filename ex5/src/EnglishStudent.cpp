/*--------------------------------------------------------------------
 **	 File Name: EnglishStudent.cpp
 **
 **  Description: This is the implementation of an English
 **               student object.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */
// This is the code that tells a EnglishStudent how to do EnglishStudent things...

#include <iostream>


// Here we will define all the code we outlined in the header...
#include "EnglishStudent.h"

// This is the default constructor.  We need to call the base class constructor too.
EnglishStudent::EnglishStudent() :
    Student(){
    mName ="unknown";  // initialize the name.  We don't know it.  We should use the next constructor.
}


EnglishStudent::EnglishStudent(std::string newName) :
    Student(newName){
    // mName =newName;  No need to do this as it will be done in the base class.
}

EnglishStudent::~EnglishStudent(){

}

void
EnglishStudent::SayHello(){
    std::cout << "Hello. My name is " << mName << "." << std::endl;
}

