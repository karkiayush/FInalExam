// wap to find the largest of 4 numbers where your program should have three classes and each classes should have one integer
#include <iostream>
using namespace std;
int n4 = 22;
class fnum
{
public:
    int n1;

public:
    void setter()
    {
        cout << "enter 1st num : ";
        cin >> n1;
    }
};

class snum
{
public:
    int n2;

public:
    void input()
    {
        cout << "enter 2nd num : ";
        cin >> n2;
    }
};
class tnum
{
public:
    int n3;

public:
    void take()
    {
        cout << "enter 3rd num : ";
        cin >> n3;
    }
};

void largest(fnum f, snum s, tnum t)
{
    cout << "The four numbers are : " << f.n1 << "\t" << s.n2 << "\t" << t.n3 << "\t" << n4 << endl;
    if (f.n1 > s.n2 && f.n1 > t.n3 && f.n1 >> n4)
    {
        cout << "First num : " << f.n1 << " is the largest among four numbers " << endl;
    }
    else if (s.n2 > t.n3 && s.n2 > n4)
    {
        cout << "Second num : " << s.n2 << " is the largest among four numbers " << endl;
    }
    else if (t.n3 > n4)
    {
        cout << "Third num : " << t.n3 << " is the largest among four numbers " << endl;
    }
    else
    {
        cout << "Fourth num : " << n4 << " is the largest among four numbers " << endl;
    }
}

int main()
{
    fnum f;
    snum s;
    tnum t;
    f.setter();
    s.input();
    t.take();
    largest(f, s, t);
}