// Wap to create a class calle fruit with constructor displaying "I'm a fruit", creating derived class
#include <iostream>
using namespace std;
class Base
{
public:
    int age;
    bool maritialStatus;
    void getter()
    {
        cout << "Enter the age and maritial status of the young man " << endl;
        cin >> age >> maritialStatus;
    }
    void setter()
    {
        cout << "The age and maritial status of the young man is :  " << endl;
        cout << age << maritialStatus << endl;
    }
};
