/*--------------------------------------------------------------------
 **	 File Name: School.cpp
 **
 **  Description: An object which represents the school.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

#include "School.h"

#include <iostream>

// Note below I show another way to initialize a member variable...
School::School() :
    mName("unknown"){

}

School::School(std::string strName) :
    mName(strName){

}

School::~School(){

}

void
School::AddStudent(Student newStudent){
    mStudentList.push_back(newStudent);
}

void
School::AddCourse(Course newCourse){
    mCourseList.push_back(newCourse);
}

void
School::ListStudents(){
    // todo...  Add the code.
}

void
School::ListCourses(){
    // todo...  Add the code.
}

void
School::IntroduceStudents(){
    std::cout << mName << " Student List:" << std::endl << mStudentList.size() << " students registered" <<
        std::endl << std::endl; // Hey we can wrap it to the next line.  The ';' char is the only thing
				// that can end a line of source code.

    // First time doing anything interesting with the vector.
    // They are simply a list of 'things'.  In this case, it is a list of Students.

    // To move through the vector, we have to create an iterator.
    // It looks odd, but trust me...
    // First we need to tell the compiler that our iterator is the same type as our vector,
    //  namely, "Student".
    std::vector<Student>::iterator stuIt;

    // A typical for loop.  we initialize the iterator and then compare it against the end.
    for(stuIt = mStudentList.begin(); stuIt != mStudentList.end(); stuIt++){
	// Each time through, it 'points' to the next element in the list.  We can use
 	// it by directly accessing stuIt. Each item in the list is called an "instance".
        stuIt->SayHello();
    }
}



