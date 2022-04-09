#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;

public:
    void setFullName(string x)
    {
        name = x;
    }
    string getFullName()
    {
        return name;
    }
};

int main()
{
    // the meaning of encapsulation is sensetive data is hidden from the user.

    // in encapsulation we have to use setter and getter methods.

    Student riyaz;
    riyaz.setFullName("Riyaz Hossain");
    cout << "Your Full Name is : " << riyaz.getFullName() << endl;
    return 0;
}