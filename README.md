# Class Registration Simulation

## Overview

This project is a C++ implementation of a simple course registration system. It demonstrates object-oriented programming concepts such as classes, constructors, copy constructors, assignment operators, dynamic memory management, and file processing.

The program models courses and students, allowing students to be enrolled in courses while respecting maximum enrollment limits. It also reads course and student data from an input file and displays the processed information.

---

## Files Included

| File | Description |
|------|-------------|
| `Makefile` | Compiles the project and generates the executable. |
| `README.md` | Project documentation. |
| `course.cpp` | Implementation of the `Course` class. |
| `student.cpp` | Implementation of the `Student` class. |
| `utils.cpp` | Utility functions, including file processing functions. |
| `program3.h` | Header file containing class declarations and function prototypes. |
| `program3_driver.cpp` | Driver program that tests the classes and processes course registration data. |
| `course_and_student_data.txt` | Sample input file containing course and student information. |
| `test_data.txt` | Additional input file for testing the program. |

---

## Features

- Create `Student` objects using default, parameterized, and copy constructors.
- Create `Course` objects using default, parameterized, and copy constructors.
- Enroll students into courses.
- Prevent enrollment when the maximum capacity has been reached.
- Increase a course's maximum enrollment dynamically.
- Display all students enrolled in a course.
- Test the copy constructor and assignment operator for the `Course` class.
- Read course and student information from an input file.
- Store processed data in arrays of `Course` and `Student` objects.
- Display processed course information and enrollment summaries.

---


## Program Flow

The program performs the following steps:

1. Checks that an input file is provided as a command-line argument.
2. Tests the `Student` class constructors and member functions.
3. Tests the `Course` class by:
   - Creating course objects
   - Enrolling students
   - Checking enrollment limits
   - Increasing course capacity
   - Testing the copy constructor
   - Testing the assignment operator
4. Opens the specified input file.
5. Processes course and student information from the file.
6. Displays all processed courses and their enrolled students.
7. Prints the total number of courses and students processed.

---

## Input Files

The program accepts a text file containing course and student information.

Included sample input files:

- `course_and_student_data.txt`
- `test_data.txt`

---

## Concepts Demonstrated

- Object-Oriented Programming (OOP)
- Classes and Objects
- Constructors and Destructors
- Copy Constructors
- Assignment Operators
- Dynamic Memory Management
- Arrays of Objects
- File Input (`ifstream`)
- Command-Line Arguments
- Modular Programming
- Encapsulation
