#include "program3.h"

/*********************************************************************
void processCourseInformation(ifstream& fileInput, Course* courseArr, Student* studentArr, int& courseCount, int& studentCount);
Purpose:
    Loop through the text file and process each file into the respective arrays.
Parameters:
    List each of each parameter including data type and description. 
    I/O ifstream& fileInput -- read the file input
	I/O Course* courseArr -- dynamically allocated array for course 
	I/O Student* studentArr -- dynamically allocated array for student 
	I/O int& courseCount -- number of courses
	I/O int& studentCount -- number of students
Return Value:
	-
Notes:
    Loops till eof so reads the course info, the capacity and then the student info.
*********************************************************************/
void processCourseInformation(ifstream& fileInput, Course* courseArr, Student* studentArr, int& courseCount, int& studentCount)
{
    courseCount = 0;
    studentCount = 0;

    string szLine;

    //read the entire line
    while(getline(fileInput, szLine))
    {
        string szCID, szCName;

        istringstream stream(szLine);

        //1st token
        stream >> szCID;

        //for the rest of the tokens
        string szTemp;
        while(stream >> szTemp)
        {
            szCName += szTemp + " ";
        }
        //remove space at the end
        szCName.pop_back();

        int iCap;
        fileInput >> iCap;
        fileInput.ignore();

        courseArr[courseCount] = Course(szCID, szCName, iCap);
        courseCount++;

        //Reading the students now
        while(getline(fileInput, szLine))
        {
            if(szLine == "*********************")
                break;

            string szSID, szSName;
            istringstream stream(szLine);

            //1st token
            stream >> szSID;

            //for the rest of the tokens
            string szTemp;
            while(stream >> szTemp)
            {
                szSName += szTemp + " ";
            }
            //remove space at the end
            szSName.pop_back();

            studentArr[studentCount] = Student(szSID, szSName);
            courseArr[courseCount-1].enrollStudent(studentArr[studentCount]);
            studentCount++;
        }
    }
}