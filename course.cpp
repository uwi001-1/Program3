#include "program3.h"

//Default Constructor
Course::Course()
{
    szCourseID = "XXX0000";
    szCourseName = "Test Course";
    iMaxStudents = 10;

    studentEnrolled = new Student[iMaxStudents];
    iNumEnrolled = 0;
}

//Parameterized Constructor
Course::Course(string id, string name, int capacity)
{
    szCourseID = id;
    szCourseName = name;
    iMaxStudents = capacity;

    studentEnrolled = new Student[iMaxStudents];
    iNumEnrolled = 0;
}

//Copy constructor
Course::Course(const Course& other)
{

}

//Assignment Operator
Course::Course& operator=(const Course& other)
{

}

//Destructor
Course::~Course()
{

}
