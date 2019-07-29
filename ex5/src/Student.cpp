/*--------------------------------------------------------------------
 **	 File Name: Student.cpp
 **
 **  Description: An object which represents a student.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

// This is the code that tells a Student how to do Studently things...


// Here we will define all the code we outlined in the header...
#include "Student.h"

// iostream handles the std::cout
#include <iostream>


// This is the default constructor.
// All things here need to be told they belong specifically to 'Student' so we prefix
// everything with Student::
Student::Student(){
    mName ="unknown";  // initialize the name.  We don't know it.  We should use the next constructor.
}


Student::Student(std::string newName){
    mName =newName;
}

Student::~Student(){

}

void 
Student::RegisterForCourse(int courseId){
    // ... register for a course.  Add it to our list.
}

void 
Student::RegisterForCourse( Course newCourse ){
    mCourseList.push_back(newCourse); // This just 'pushes' the newCourse object onto our list.
}

void
Student::SayHello(){
    std::cout << "Hello. My name is " << mName << "." << std::endl;
}


