/*--------------------------------------------------------------------
 **	 File Name: Student.h
 **
 **  Description: The definition of a student.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

// Don't worry about this.  It's good to put this at the top of all headers.
// It is done so that the file is only included once when it compiles.
// Trust me on this.
#ifndef STUDENT_H
#define STUDENT_H

// Let's include the course file because we will need to contain them.
#include "Course.h"
#include <vector>
#include <string>

// define the class as a Student.
class Student{
    // Anything under here is 'public'.  This means everything here is accessible to everyone.
    public:
        Student();  // This is a 'default' constructor or the function that creates the object.
        Student(std::string name); // this constructor takes a name.
        virtual ~Student(); // A destructor.

        // We can register for a course by its ID...
        void RegisterForCourse(int courseId);
        // or by passing it the course object...
        void RegisterForCourse( Course newCourse );

		// Wow.  A virtual function.  This is just like a regular function, however, if a derived
		// class implements their own version of this function using the same name and the code calls
			// it as the derived class, it will call that one instead.  If it
		// does not implement its own version, or it calls it as the base class (like ours does), it will
		// call this one.
		virtual void SayHello(void);

	// protected means that even if you instanciate a class of this type, you can't touch these.
	// the things here are only used internally.  However, any class that derives from this can.
    protected:
        std::string mName; // A Students name.  The 'm' prefix is optional but is good to show this is a 'member' variable.
        std::vector<Course> mCourseList;  // This is simply a list of courses we are registered for.

    // Even derived classes can't use the private members.
    private:
};

#endif // STUDENT_H
