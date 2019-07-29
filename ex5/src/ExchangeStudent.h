/*--------------------------------------------------------------------
 **	 File Name: ExchangeStudent.h
 **
 **  Description: This is the description of a specific
 **               kind of Student.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */
#ifndef EXCHANGE_STUDENT_H
#define EXCHANGE_STUDENT_H

#include "Student.h"

// This is a type of student so lets derive from that class.
class ExchangeStudent : public Student{
    // Anything under here is 'public'.  This means everything here is accessible to everyone.
    public:
        ExchangeStudent();  // This is a 'default' constructor or the function that creates the object.
        ExchangeStudent(std::string name); // this constructor takes a name.
	~ExchangeStudent();
 	// Note we don't have the registration.  Thats because we can use it from our Student 
	// Base class.  Cool!  As long as what it does is the same, we don't need to do anything.

	void SayHello(void); // Wait a sec.  This was already defined in the base class Student.
			     //  This is called an 'Overloaded function'. SayHello for an Exchange
			     //  student will be this one so long as the base class isn't called 
			     //  explicitly.	

    private:
 
};

#endif // EXCHANGE_STUDENT_H
