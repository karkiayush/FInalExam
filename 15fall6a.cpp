// Define a class called stack and implement the generic methods to push and pop the element from the stack
// error
#include <iostream>
using namespace std;
template <class t>
class stack
{
public:
    t top = -1, ch;
    t stack[5];
    t push();
    t pop();
    t show();
    void input()
    {
        cout << "Enter the following " << endl;
        cout << "1.push"
             << "\t"
             << "2.pop"
             << "\t"
             << "3.show\t"
             << "4.exit" << endl;
        while (1)
        {
            cout << "Enter the choice : ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                push();
            case 2:
                pop();
            case 3:
                show();
            case 4:
                exit();
            default:
                cout << "Invalid input" << endl;
            }
        }
    }

    push()
    {
        int item;
        if (top == 5 = 1)
        {
            cout << "stack is full" << endl;
        }
        else
        {
            cout << "store item in the stack " << endl;
            cin >> item;
            top = top + 1;
            stack[top] = item;
        }
    }

    pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "popped " << stack[top] << endl;
            top = top - 1;
        }
    }

    show()
    {
        if (top >= 0)
        {
            cout << "stack element " << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << stack[top];
            }
            else
            {
                cout << "stack is empty" << endl;
            }
        }
    }
};

int main()
{
    stack<int> s;
}