#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    void input()
    {
        cout << " a , b" << endl;
        cin >> a >> b;
    }

    friend void add(A ob);
};

void add(A ob)
{
    int c;
    c = ob.a + ob.b;
    cout << "sum = " << c << endl;
}

int main()
{
    system("clear");
    A ob;
    ob.input();
    add(ob);
    return 0;
}