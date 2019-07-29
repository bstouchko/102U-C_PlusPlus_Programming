/*--------------------------------------------------------------------
 **	 File Name: Course.h
 **
 **  Description: This is the description of specific
 **               course students can take.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */
#ifndef COURSE_H
#define COURSE_H

#include <string>


// define the school
class Course{
    // Anything under here is 'public'.  This means everything here is accessible to everyone.
    public:
        Course();  // This is a 'default' constructor or the function that creates the object.
        Course(std::string name, int id, std::string desc); // this constructor takes all the data.
	    ~Course(); // This is a destructor.  It gets called when the class is deleted.

    // private means that even if you instanciate a class of this type, you can't touch these.
    // the things here are only used internally.  This is used to protect the class data.
    private:
        std::string mName; // The name of the course.
	    std::string mCourseDescription;
        int mId;

};

#endif // SCHOOL_H
