// When more than one class is inherited from base class is known as heirarchical inheritance
#include <iostream>
using namespace std;
class Base
{
public:
    int age;
    bool maritialStatus = true;
    void getter()
    {
        cout << "Enter the age and of the young man " << endl;
        cin >> age;

        cout << "The age and maritial status of the young man is :  " << endl;
        cout << age << endl
             << maritialStatus << endl;
    }
}
}
;

class Derived : public Base
{
public:
    void setter(){

    };
    int main()
    {
        system("clear");
        Derived d;
        d.getter();
        d.setter();
    }
