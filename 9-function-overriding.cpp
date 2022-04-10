#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Your Name is : " << name << " Your age is : " << age << endl;
    }
};

class Student : public Person
{
public:
    int id;
    void display()
    {
        cout << "Your Name is : " << name << " Your age is : " << age << " And Your id is : " << id << endl;
    }
};

int main()
{
    Person riyaz;
    riyaz.name = "Riyaz Hossain";
    riyaz.age = 19;
    riyaz.display();
    Student shuvo;
    shuvo.name = "Shuvo Khan";
    shuvo.age = 21;
    shuvo.id = 121;
    shuvo.display();
    return 0;
}