#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int id = 101;
    string name = "Riyaz Hossain";

public:
    friend class B;
};

class B
{
public:
    void display(A ob)
    {
        cout << "Your Name is  : " << ob.name << endl;
        cout << "Your ID is  : " << ob.id << endl;
    }
};

int main()
{
    A ob1;
    B ob2;

    ob2.display(ob1);

    return 0;
}