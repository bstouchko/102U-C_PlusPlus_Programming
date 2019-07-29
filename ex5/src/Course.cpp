/*--------------------------------------------------------------------
 **	 File Name: Course.cpp
 **
 **  Description: Implementaiton of our Course Object.
 **
 **  Author:  Brian Stouchko
 **            for Team102.
 **
 **  Creation Date: 06/12/2019
 **
 **--------------------------------------------------------------------
 */

#include "./Course.h"

Course::Course() :
    mName("unknown"),
    mId(0){
}

Course::Course(std::string name, int id, std::string desc) :
    mName(name),
    mCourseDescription(desc),
    mId(id){
}

Course::~Course(){

}
