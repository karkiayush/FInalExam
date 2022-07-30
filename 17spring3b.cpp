// create a class named "time" a constructor having hour, minute and second as an arguments is use to take two time data from user. The add function that takes two class objects an arguments adds them respectively then display the aggregragte result ? (Apply 60 secondds =1 mins and 60 mins = 1 hour)
#include <iostream>
using namespace std;
class time
{
public:
    int h, m, s;

public:
    time(int hour, int mins, int sec)
    {
        h = hour;
        m = mins;
        s = sec;
    }
    void disp()
    {
        cout << "The time is " << endl;
        cout << h << "hours" << endl;
        cout << m << "mins" << endl;
        cout << s << "second" << endl;
    }

    friend void add(time &t, time &t1)
    {
    }
};
int main()
{
    time s(1, 2, 4);
    s.disp();

    time s1(2, 3, 5);
    s1.disp();

    time s2(s, s1);
    s2.add();
}