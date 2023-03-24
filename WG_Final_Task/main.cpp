
//
//  main.cpp
//  C867
//
//  Created by Kyle on 3/12/23.
//

#include "degree.h"
#include "student.hpp"
#include "roster.hpp"
#include <string>

using namespace std;
int main() {
    
    
    const string intro = "C867 final Task | C++ | 009392213 | Kyle Myers";

    cout << intro << endl;

    Roster *roster = new Roster();

    // Adds all student data to classRoster
    roster->parseInitStudentData();
    
    
    /*Function Test
    roster->printAll();
    cout << endl;
    roster->printInvalidEmails();
    cout << endl;
    roster->printByDegreeProgram(DegreeProgram::SOFTWARE);
    cout << endl;*/
    
    
    //loop through classRosterArray and for each element:
    for(int i = 0; i<5; i++){
        roster->printAverageDaysInCourse(roster->classRosterArray[i]->getStudentID());
    }
    roster->remove("A3");
    cout << endl;
    roster->printAll();
    cout << endl;
    roster->remove("A3");
    cout << endl;
    cout  << "DONE" << "\n";
}
