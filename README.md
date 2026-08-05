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
