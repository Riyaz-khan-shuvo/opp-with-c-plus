#include "Student.h"
#include <bits/stdc++.h>
using namespace std;
Student::Student()
{
    cout << "I am from Constructor\n";
}

void Student::display()
{
    cout << "I am from Display Function!!!" << endl;
}

Student::~Student()
{
    cout << "I am from destructor !!!\n";
}