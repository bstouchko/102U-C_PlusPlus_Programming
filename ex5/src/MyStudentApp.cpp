/*--------------------------------------------------------------------
 **	 File Name: MyStudentApp.cpp
 **
 **  Description: A sample semi complex program.
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

// We need to tell our code about our other files.

#include "School.h"
#include "EnglishStudent.h"
#include "ExchangeStudent.h"
#include "Course.h"

// main is the starting point of every program.
// we will learn about argc and argv in the next program.
int main(int argc,  char** argv){

    School mySchool("Somerville High School");

    EnglishStudent stJoe("Joe");
    EnglishStudent stMary("Mary");
    ExchangeStudent stJose("Jose");

    Course BW112("Basket Weaving", 112, "Weaving some cool baskets");
    Course CM422("Complicated Math", 422, "Some mind altering math");

    mySchool.AddStudent(stJoe);
    mySchool.AddStudent(stMary);
    mySchool.AddStudent(stJose);

    mySchool.IntroduceStudents();

    // The reason stJose is in English above and not spanish is because
    // of how the IntroduceStudents function gets the Students as base
    // class objects and not as their derived types.  So it calls the base
    // class version of the virtual.  If we access the object itself and
    // not as a base class reference, it will call the derived version.
    stJose.SayHello();
}


