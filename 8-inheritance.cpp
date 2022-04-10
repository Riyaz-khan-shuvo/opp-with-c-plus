#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int age;
    string name;
    void display(string x, int y)
    {
        name = x;
        age = y;
        cout << "Your Name is : " << name << " and Your age is : " << age << endl;
    }
};

class Student : public Person
{
public:
    int id;
    void display(string x, int y, int z)
    {
        name = x;
        age = y;
        id = z;
        cout << "Your Name is : " << name << " Your age is : " << age << " And Your ID : " << id << endl;
    }
};

int main()
{
    Person riyaz;
    riyaz.display("Riyaz", 19);
    Student shuvo;
    shuvo.display("Riyaz", 19, 1190);

    return 0;
}