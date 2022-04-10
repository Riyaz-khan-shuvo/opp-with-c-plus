#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    virtual void display()
    {
        cout << "I am From Person Class" << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "I am From Student Class" << endl;
    }
};
class Teacher : public Person
{
public:
    void display()
    {
        cout << "I am From Teacher Class" << endl;
    }
};

int main()
{
    // the word polymorphism many form...

    Person *p;
    Student s;
    Teacher t;

    // p.display();
    // s.display();
    // t.display();


    p = &s;
    p->display();

    p = &t;
    p->display();

    return 0;
}