#include "program3.h"


//Default constructor 
Student::Student()
{
	szStudentID = "A00000000";
    szStudentName = "Test Student";
}

//Parameterized constructor 
Student::Student(string id, string name)
{
    szStudentID = id;
    szStudentName = name;
}

//Copy Constructor
Student::Student(const Student& other)
{
    szStudentID = other.szStudentID;
    szStudentName = other.szStudentName;
}

//Destructor
Student::~Student()
{
    cout << "Destructor called" << endl;
}

/*********************************************************************
string getStudentInfo();
Purpose:
    Return a string containing studentID and name, seperated by a colon with a space(: ) eg: A00000000: Test Student.
Parameters:
    - 
Return Value:
    Returns the formatted string
Notes:
    String concatenation has been used for the return.
*********************************************************************/
string Student::getStudentInfo()
{
    return szStudentID + ": " + szStudentName;
}