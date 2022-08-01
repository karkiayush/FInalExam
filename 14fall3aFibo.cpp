/*wap with class fibo to realize following code snippet
Fibo = 1;
for (i = 1; i < = 10; i++)
{
    ++f;
    f.display();
}
*/
#include <iostream>
using namespace std;
class fibo
{
private:
    int f0, f1, fib;

public:
    fibo()
    {
        f0 = -1;
        f1 = 1;
        fib = f0 + f1;
    }
    void display()
    {
        cout << fib << "\t";
    }
    void operator++()
    {
        f0 = f1;
        f1 = fib;
        fib = f0 + f1;
    }
};

int main()
{
    fibo f;
    for (int i = 1; i <= 10; i++)
    {
        ++f;
        f.display();
    }
}