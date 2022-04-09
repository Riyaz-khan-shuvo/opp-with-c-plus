#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    Student(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout << "Your Name is : " << name << endl;
    }
};

int main()
{
    Student riyaz("Riyaz Hossain");
    riyaz.display();

    return 0;
}