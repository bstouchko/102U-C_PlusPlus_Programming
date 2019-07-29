/*--------------------------------------------------------------------
 **	 File Name: EnglishStudent.h
 **
 **  Description: This is a derivation of Student.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **         -----------
 **         | Student |
 **         -----------
 **              |
 **        ---------------
 **        |             |
 **   -----------   -----------
 **   | English |   | Exchange |
 **   | Student |   | Student  |
 **   -----------   ------------
 **--------------------------------------------------------------------
 */
#ifndef ENGLISH_STUDENT_H
#define ENGLISH_STUDENT_H

#include "Student.h"

// This is a type of student so lets derive from that class.
class EnglishStudent : public Student{
    // Anything under here is 'public'.  This means everything here is accessible to everyone.
    public:
        EnglishStudent();  // This is a 'default' constructor or the function that creates the object.
        EnglishStudent(std::string name); // this constructor takes a name.
		~EnglishStudent();
 		// Note we don't have the registration.  Thats because we can use it from our Student 
		// Base class.  Cool!  As long as what it does is the same, we don't need to do anything.

		void SayHello(void); // Wait a sec.  This was already defined in the base class Student.
		//  This is called an 'Overloaded function'. SayHello for an Exchange
		//  student will be this one so long as the base class isn't called 
		//  explicitly.

    private:

};

#endif // ENGLISH_STUDENT_H
