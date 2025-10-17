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
/*********************************************************************
Course(const Course& other);
Purpose:
    Create new object by copying another object of same class.
Parameters:
    const Course& other  -- the existing object
Return Value:
    -
Notes:
    Creates new memory and copies data
*********************************************************************/
Course::Course(const Course& other)
{
    szCourseID = other.szCourseID;
    szCourseName = other.szCourseName;
    iMaxStudents = other.iMaxStudents;
    iNumEnrolled = other.iNumEnrolled;

    //create dynamic array
    studentEnrolled = new Student[iMaxStudents];

    //copy info over
    for(int i=0; i<iNumEnrolled; i++)
    {
        studentEnrolled[i] = other.studentEnrolled[i];
    }

}

//Assignment Operator
/*********************************************************************
Course& operator=(const Course& other);
Purpose:
    Allocates new memory for the new object and deallocate the old memory
Parameters:
    const Course& other  -- the existing object
Return Value:
    Returns the new object
Notes:
    Deletes old data and copy new data
*********************************************************************/
Course& Course::operator=(const Course& other)
{
    //avoid self-assignment
    if(this == &other)
    {
        return *this;
    }

    //free old memory
    delete[] studentEnrolled;

    //populate new info
    szCourseID = other.szCourseID;
    szCourseName = other.szCourseName;
    iMaxStudents = other.iMaxStudents;
    iNumEnrolled = other.iNumEnrolled;
    studentEnrolled = new Student[iMaxStudents];
    for(int i=0; i<iNumEnrolled; i++)
    {
        studentEnrolled[i] = other.studentEnrolled[i];
    }

    //return new obj
    return *this;
}

//Destructor
Course::~Course()
{
    delete[] studentEnrolled;
}


/*********************************************************************
string getCourseInfo();
Purpose:
    Return a string containing course ID and name, seperated by a colon with a space(: ) and capacity and enrollement.
Parameters:
    - 
Return Value:
    Returns the formatted string
Notes:
    String concatenation has been used for the return.
*********************************************************************/
string Course::getCourseInfo()
{
    return szCourseID + ": " + szCourseName + 
    "\nCapacity: " + to_string(iMaxStudents) + 
    "\nEnrollment: " + to_string(iNumEnrolled) + "\n"; 
}


/*********************************************************************
bool enrollStudent(const Student& newStudent);
Purpose:
    Enroll the new student to the course and increase the number of students enrolled.
Parameters:
    I Student& newStudent -- has the information about the new student for enrollment.
Return Value:
    Returns true if the student is added is successfully or else returns false.
Notes:
    -
*********************************************************************/
bool Course::enrollStudent(const Student& newStudent)
{
    if(iNumEnrolled >= iMaxStudents)
    {
        cout << "Max capacity reached. Please increase the course capacity before adding more students." << endl;
        return false;
    }
    else
    {
        studentEnrolled[iNumEnrolled] = newStudent;
        iNumEnrolled++;
        return true;
    }
}


/*********************************************************************
void displayStudents();
Purpose:
    Prints the course infromation and loops through the students to print their information too.
Parameters:
    - 
Return Value:
    N/A.
Notes:
    Use the getCourseInfo() and getStudentInfor() function.
*********************************************************************/
void Course::displayStudents()
{
    string szCourseInfo = getCourseInfo();
    cout << szCourseInfo << endl;

    for(int i=0; i<iNumEnrolled; i++)
    {
        string szStudentInfo = studentEnrolled[i].getStudentInfo();
        cout << szStudentInfo << endl;
    }

}


/*********************************************************************
void increaseMaxEnrollment(int additionalCapacity);
Purpose:
    Increases the size of the array and delete the old array and put in the new array in the same pointer.
Parameters:
    I int additionalCapacity -- take in the additioanl capacity for the array
Return Value:
    -
Notes:
    Delete the old dynamicaly allocated array.
*********************************************************************/
void Course::increaseMaxEnrollment(int additionalCapacity)
{
    if (additionalCapacity <= 0) //if additional capacity is wrong 
    {
        return;
    }

    int iNewCapacity = iMaxStudents + additionalCapacity;
    Student* newArray = new Student[iNewCapacity];

    for (int i = 0; i < iNumEnrolled; ++i) {
        newArray[i] = studentEnrolled[i];
    }

    delete[] studentEnrolled;  //delete the old dynamically allocated array
    //copy the new array to the same array pointer 
    studentEnrolled = newArray;
    iMaxStudents = iNewCapacity;
}