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
void student::print(){
    cout << "| Student ID :\t" << this->studentID << " |" << '\t';
    cout << "First & Last Name :\t" << this->firstName << '\t';
    cout << this->lastName << " |" << '\t';
    cout << "Email Address :\t" << this->email << " |" << '\t';
    cout << "Age :\t" << this->age << " |" << '\t';
    cout << "Days in Course :\t" << this->numDaysToComplete[0] << "," << '\t';
    cout << this->numDaysToComplete[1] << "," << '\t';
    cout << this->numDaysToComplete[2] << " |" << '\t';
    cout << "Degree Program :\t" << degreeProgramString[(int)this->degree]<< " |" << '\t' << endl;
};

