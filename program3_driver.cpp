#include "program3.h"

/*********************************************************************
File name: program3_driver.cpp
Author: Dr.Patrick (ueg11)
Date: 09/02/2025

Purpose:
    Driver for program 3 to simulate course registration.
Command Parameters:
    File with course and student information.
Input:
    User input
Results:
    Course simulation.
Notes:
    -
*********************************************************************/
int main(int argc, char *argv[])
{
	// Check for command line arguments
	if(argc != 2)
    {
        cout << "Not enough arguments" << endl;
        return -1;
    }

    // Testing Student class
    cout << "=== Testing Student Class ===" << endl;
    
    // Default constructor
    Student defaultStudent;
    cout << "Default Student Info: " << defaultStudent.getStudentInfo() << endl;

    // Parameterized constructor
    Student student1("A12345678", "Alice Johnson");
    Student student2("A87654321", "Bob Smith");
    cout << "Student 1 Info: " << student1.getStudentInfo() << endl;
    cout << "Student 2 Info: " << student2.getStudentInfo() << endl;

    // Copy constructor
    Student copiedStudent = student1;
    cout << "Copied Student Info (from Student 1): " << copiedStudent.getStudentInfo() << endl;

    // Testing Course class with Students
    cout << "\n=== Testing Course Class ===" << endl;

    // Default constructor for Course
    Course course1;
    cout << "Default Course Info:\n" << course1.getCourseInfo() << endl;

    // Parameterized constructor for Course
    Course course2("CS2308", "Data Structures", 3);
    cout << "Parameterized Course Info:\n" << course2.getCourseInfo() << endl;

    // Enroll students in course2
    cout << "\nEnrolling Students in Course 2:" << endl;
    course2.enrollStudent(student1);
    course2.enrollStudent(student2);

    // Enroll additional student to check capacity limit
    Student student3("A11223344", "Charlie Brown");
    Student student4("A99887766", "Daisy Ridley");
    course2.enrollStudent(student3);

    if (!course2.enrollStudent(student4)) 
	{
        cout << "Failed to enroll Daisy Ridley; max capacity reached.\n";
    }

    // Display students in course2
    cout << "\nCurrent Students in Course 2:\n";
    course2.displayStudents();

    // Test increaseMaxEnrollment
    cout << "\nIncreasing max enrollment by 2.\n";
    course2.increaseMaxEnrollment(2);

    // Attempt to enroll an additional student now that capacity has increased
    course2.enrollStudent(student4);

    // Display updated students in course2
    cout << "\nStudents in Course 2 after increasing capacity:\n";
    course2.displayStudents();

    // Test copy constructor for Course
    Course course3 = course2;
    cout << "\nCopied Course (course3) Info and Students:\n";
    cout << course3.getCourseInfo();
    course3.displayStudents();

    // Test assignment operator for Course
    Course course4;
    course4 = course2;
    cout << "\nAssigned Course (course4) Info and Students:\n";
    cout << course4.getCourseInfo();
    course4.displayStudents();

    // Set up the input file stream
    ifstream fileInput;
	fileInput.open(argv[1]);
    if (!fileInput) 
	{
        cerr << "Error: Could not open file." << endl;
        return -1;
    }

    // Define maximum array sizes for testing purposes
    const int MAX_COURSES = 20;
    const int MAX_STUDENTS = 150;

    // Create arrays to hold courses and students
    Course coursesArr[MAX_COURSES];
    Student studentArr[MAX_STUDENTS];

    int iCIndex = 0; // Index for courses array
    int iSIndex = 0; // Index for students array

    // Call the function to process course information from the file
    processCourseInformation(fileInput, coursesArr, studentArr, iCIndex, iSIndex);

    // Close the file input stream
    fileInput.close();

    // Output the processed data for verification
    cout << "\n=== Processed Course and Student Information from File ===\n";
    for (int i = 0; i < iCIndex; i++) 
	{
        cout << coursesArr[i].getCourseInfo();
        cout << "Enrolled Students:\n";
        coursesArr[i].displayStudents();
        cout << "--------------------\n";
    }

    cout << "Total Courses Processed: " << iCIndex << endl;
    cout << "Total Students Processed: " << iSIndex << endl;

    return 0;
}