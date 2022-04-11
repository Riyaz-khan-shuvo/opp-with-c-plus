#include <bits/stdc++.h>
using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout << "Hello I am from call function!!!" << endl;
    }
    virtual void SendMessage() = 0;
};

class Rahim : public MobileUser
{
public:
    void SendMessage()
    {
        cout << "Hello , I am Rahim" << endl;
    }
};
class Karim : public MobileUser
{
public:
    void SendMessage()
    {
        cout << "Hello , I am Karim" << endl;
    }
};

int main()
{
    MobileUser *m;
    Rahim r;
    Karim k;

    m = &r;

    m->SendMessage();
    m->call();
    
    m = &k;

    m->SendMessage();

    return 0;
}