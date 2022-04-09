#include <iostream>
using namespace std;

class Student
{
public:
    void YourName(string Name)
    {
        cout << "Your Name is : " << Name<<endl;
    }
};

int main()
{
    Student shuvo , riyaz , ismail;
    shuvo.YourName("Shuvo");
    riyaz.YourName("Riyaz");
    ismail.YourName("Ismail");
    return 0;
}