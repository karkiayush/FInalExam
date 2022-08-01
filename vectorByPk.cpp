#include <iostream>
using namespace std;
class derived;
class base
{
protected:
    int a, b, c, d;

public:
    void get()
    {
        cout << "Enter two coordinates: \n";
        cin >> a >> b;
        cout << "Enter two coordinates: \n";
        cin >> c >> d;
    }
    friend void display();
};
class derived : public base
{
public:
    int x, y;
    void add()
    {
        x = a + c;
        y = b + d;
    }
};
void display(derived p)
{
    cout << "Sum of two coordinate is (" << p.x << "," << p.y << ")" << endl
         << endl;
}
int main()
{
    derived o1;
    o1.get();
    o1.add();
    display(o1);
    return 0;
}