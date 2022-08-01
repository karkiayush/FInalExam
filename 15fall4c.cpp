// Wap to input the info of n student and then display it using the concept of mulitlevel inheritance

// this code can't produce desired output
#include <iostream>
#include <string>
using namespace std;
class info
{
public:
    int n;
    string name[30];
    int age[30];
    string standard[30];
    void input()
    {
        cout << "Enter the no. of student whose info has to be stored : ";
        cin >> n;
        string name[n];
        int age[n];
        string standard[n];
        cout << "Enter the info of " << n << " student" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "name" << i << " = ";
            cin >> name[i];
            cout << "age" << i << " = ";
            cin >> age[i];
            cout << "standard" << i << " = ";
            cin >> standard[i];
        }
    }
};

class disp : public info
{
public:
    void display()
    {
        int x = n - 3;
        cout << "The info the student " << endl;
        for (int i = 0; i < x; i++)
        {
            cout << "Name : " << name[i] << endl;
            cout << "Age : " << age[i] << endl;
            cout << "Standard : " << standard[i] << endl;
        }
    }
};
class disp1 : public info
{
public:
    void display()
    {
        int y = n - 3;
        cout << "The info the student " << endl;
        for (int i = y; i < n; i++)
        {
            cout << "Name : " << name[i] << endl;
            cout << "Age : " << age[i] << endl;
            cout << "Standard : " << standard[i] << endl;
        }
    }
};

int main()
{
    system("clear");
    disp d;
    d.input();
    d.display();
    disp1 D;
    D.display();
}