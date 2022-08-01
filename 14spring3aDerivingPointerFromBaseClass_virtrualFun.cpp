#include <iostream>
using namespace std;
class base
{
public:
    // Normal function
    void show()
    {
        cout << "hello, its raining" << endl;
    }
    // virtual fun
    virtual int method()
    {
        cout << "hi,it's sunny day" << endl;
        return 0;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "hello, it's derived class " << endl;
    }
    int method()
    {
        cout << "hello, it's the second function of derived class" << endl;
        return 0;
    }
};

int main()
{
    system("clear");
    base *bptr;
    derived d;
    bptr = &d;
    bptr->method();
    bptr->show();
}