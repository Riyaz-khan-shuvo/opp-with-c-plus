#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double cgpa;
    Student(int x, double y)
    {
        id = x;
        cgpa = y;
    }
    void display()
    {
        cout << "Id is : " << id << " CGPA is : " << cgpa;
    }
    Student()
    {
        cout << "I am from Default Constructor !!!" << endl;
    }
};

int main()
{
    Student riyaz(195, 3.97) , shuvo;
    riyaz.display();
    

    return 0;
}