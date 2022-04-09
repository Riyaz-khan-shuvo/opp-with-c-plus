#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    const int age;
    Student(int x) : age(x)
    {
        cout << "Your Age is : " << age << endl;
    }
    void display()
    {
        cout << "I am from Display Function!!!" << endl;
    }
};

int main()
{
    Student a(23);
    a.display();
    return 0;
}