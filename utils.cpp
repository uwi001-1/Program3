#include "program3.h"

/*********************************************************************
void processCourseInformation(ifstream& fileInput, Course* courseArr, Student* studentArr, int& courseCount, int& studentCount);
Purpose:
    Description of the purpose of the function.
Parameters:
    List each of each parameter including data type and description. 
    Each item should begin with whether the parameter is passed in, out or both.
    I Passed in. 
    O Passed out.
    I/O Modified. 
Return Value:
    List of values returned by the function, excluding parameters.
Notes:
    Description of any special information regarding this function. 
    This is a good place to state any assumptions the function makes.
*********************************************************************/
void processCourseInformation(ifstream& fileInput, Course* courseArr, Student* studentArr, int& courseCount, int& studentCount)
{
    courseCount = 0;
    studentCount = 0;

    string szLine, szCID, szCName;

    //read the entire line
    getline(fileInput, szLine);

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

    courseArr[courseCount] = Course(szCID, szCName, iCap);
    courseCount++;


    //Reading the students now
    while(getline(fileInput, szLine))
    {
        if(szLine == "*********************")
            break;

        string szSID, szSName;

        //read the entire line
        getline(fileInput, szLine);

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
        studentCount++;
    }
}