/*--------------------------------------------------------------------
 **	 File Name: School.h
 **
 **  Description: The definition of the School object.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

#ifndef SCHOOL_H
#define SCHOOL_H

// Let's include the course file because we will need to contain them.
#include "Course.h"
#include "Student.h"

#include <vector>
#include <string>

// define the school
class School{
    // Anything under here is 'public'.  This means everything here is accessible to everyone.
    public:
        School();  // This is a 'default' constructor or the function that creates the object.
        School(std::string name); // this constructor takes a name.
	~School(); // This is the destructor.

        // We can add a student...
        void AddStudent(Student newStudent);
 
        // We can add a course...
        void AddCourse(Course newCourse);

	void ListStudents(void);

	void ListCourses(void);

	void IntroduceStudents(void);

    // private means that even if you instanciate a class of this type, you can't touch these.
    // the things here are only used internally.  This is used to protect the class data.
    private:
        std::string mName; // A Schools name. 
        std::vector<Course> mCourseList;  // This is simply a list of courses the school offers.
	std::vector<Student> mStudentList; // This is the list of students at the school.

};

#endif // SCHOOL_H
