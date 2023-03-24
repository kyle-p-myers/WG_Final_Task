#pragma once
#include<iostream>
#ifndef DEGREE_H
#define DEGREE_H

using namespace std;

//Enumerated Class
enum class DegreeProgram {
    SECURITY, NETWORK, SOFTWARE
};

static const std::string degreeProgramString[] = {
    "Security", 
    "Network", 
    "Software"
};

#endif


