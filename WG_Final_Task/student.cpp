//
//  student.cpp
//  C867
//
//  Created by Kyle on 3/18/23.
//
#include <iostream>
#include <string>
#include "degree.h"
#include "student.hpp"
using namespace std;


// Constructor Creation
student::student(string studentId, string firstName, string lastName, string email, int age, int numDaysToComplete[3], DegreeProgram degree)
{
    this->studentID = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    setNumDaysToComplete(numDaysToComplete);
    this->degree = degree;
}

// Encapsulation (Accessor)
string student::getStudentID()
{
    return studentID;
}

int student::getAge()
{
    return age;
}

string student::getFirstName()
{
    return firstName;
}

string student::getLastName()
{
    return lastName;
}

string student::getEmail()
{
    return email;
}

int* student::getNumDaysToComplete()
{

    return numDaysToComplete;
}

DegreeProgram student::getDegreeProgram()
{
    return degree;
}

//Encapsulation (Mutators)
void student::setStudentID(string ID)
{
    this->studentID = ID;
}

void student::setAge(int age)
{
    this->age = age;
}

void student::setNumDaysToComplete(int numdays[])
{
    for (int i = 0; i < 3; i++) {
        numDaysToComplete[i] = numdays[i];
    }
}

void student::setDegreeProgram(DegreeProgram program)
{
    this->degree = program;
}

void student::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void student::setLastName(string lastName)
{
    this->lastName = lastName;
}

void student::setEmail(string email)
{
    this->email= email;
}

//Print Function for Student Info
void student::printData(variables CHOICE)
{
    switch (CHOICE) {
    case 0:
        cout << "Student ID: " << this->getStudentID() << ". " << "\n";
        break;
            
    case 1:
        cout << "First Name: " << this->getFirstName() << "\n";
        break;
            
    case 2:
        cout << " Last Name: " << this->getLastName() << "\n";
        break;
            
    case 3:
        cout << " Email Address: " << this->getEmail() << "\n";
        break;
            
    case 4:
        cout << " Age: " << this->getAge() << "\n";
        break;
            
    case 5:
        cout << " {"<< this->getNumDaysToComplete()[0] << ", " << this->getNumDaysToComplete()[1
    ] << ", " << this->getNumDaysToComplete()[2] <<"} ";
        break;
            
    case 6:
        DegreeProgram dp = this->getDegreeProgram();
        string ret;
        if (dp == DegreeProgram::SECURITY) {
            ret = "Security";
        }
        else if (dp == DegreeProgram::NETWORK) {
            ret = "Network";
        }
        else {
            ret = "Software";
        }
        cout << "Degree Program: " << ret <<"\n" << endl;
        break;

    }
}


