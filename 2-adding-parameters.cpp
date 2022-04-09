#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double cgpa;
    void SetValue(int x, double y)
    {
        id = x;
        cgpa = y;
    }
    void display()
    {
        cout << "Id is : " << id << " CGPA is : " << cgpa;
    }
};

int main()
{
    Student riyaz, shuvo;

    riyaz.SetValue(19015, 3.97);
    riyaz.display();

    return 0;
}