//
//  student.hpp
//  C867
//
//  Created by Kyle on 3/18/23.
//

#pragma once
#include<string>
#include "degree.h"

using namespace std;
class student
{
//Private Variables
private:
    int  age;
    string studentID, firstName, lastName, email;
    int numDaysToComplete[3];
    DegreeProgram degree;
    
public:
    //Accessors
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int* getNumDaysToComplete();
    DegreeProgram getDegreeProgram();

    //Mutators
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setNumDaysToComplete(int numdays[]);
    void setDegreeProgram(DegreeProgram program);

    //Constructor Statement
    student(string studentId, string firstName, string lastName, string email,int age, int numDaysToComplete[3], DegreeProgram degree);

    
   
    //Variable Choices for Print Fnct.
    void print();

    
};

