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
    szCourseID = other.szCourseID;
    szCourseName = other.szCourseName;
    iMaxStudents = other.iMaxStudents;


}

//Assignment Operator
Course::Course& operator=(const Course& other)
{

}

//Destructor
Course::~Course()
{

}


/*********************************************************************
string getCourseInfo();
Purpose:
    Return a string containing course ID and name, seperated by a colon with a space(: ) and capacity and enrollement eg: A00000000: Test Student.
Parameters:
    - 
Return Value:
    Returns the formatted string
Notes:
    String concatenation has been used for the return.
*********************************************************************/
string getCourseInfo()
{

}


/*********************************************************************
bool enrollStudent(const Student& newStudent);
Purpose:
    Return a string containing course ID and name, seperated by a colon with a space(: ) and capacity and enrollement eg: A00000000: Test Student.
Parameters:
    - 
Return Value:
    Returns the formatted string
Notes:
    String concatenation has been used for the return.
*********************************************************************/
bool enrollStudent(const Student& newStudent)
{

}


/*********************************************************************
void displayStudents();
Purpose:
    Return a string containing course ID and name, seperated by a colon with a space(: ) and capacity and enrollement eg: A00000000: Test Student.
Parameters:
    - 
Return Value:
    Returns the formatted string
Notes:
    String concatenation has been used for the return.
*********************************************************************/
void displayStudents()
{

}


/*********************************************************************
void increaseMaxEnrollment(int additionalCapacity);
Purpose:
    Return a string containing course ID and name, seperated by a colon with a space(: ) and capacity and enrollement eg: A00000000: Test Student.
Parameters:
    - 
Return Value:
    -
Notes:
    String concatenation has been used for the return.
*********************************************************************/
void increaseMaxEnrollment(int additionalCapacity)
{

}