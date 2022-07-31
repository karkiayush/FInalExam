/*wap to input two vector coordinates from the "Base" class and derived class named  "derived" inherits all
the properties of base class . derived class must contain a function named add_vector() that add the two vector i
nput form the base class and finally display the result from a function display that is a friend with the
base class*/
#include <iostream>
using namespace std;
class derived;
class base
{
public:
    int e1, e2, sum;
    base()
    {
        cout << "enter the two vector coordinates" << endl;
        cin >> e1 >> e2;
    }
    friend void output(base &t, derived &d);
};
void output(base &t, derived &d)
{
    cout << "The sum of the vector coordinates " << t.e1 << " & " << t.e2 << " is : " << d.base::sum << endl;
}
class derived : public base
{
public:
    void add_vector()
    {
        sum = e1 + e2;
    }
};

int main()
{
    base b;
    derived d;
    d.add_vector();
    output(b, d);
}