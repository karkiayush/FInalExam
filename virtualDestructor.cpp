/*                                        Virtual destructors                                                         */
#include <iostream>
using namespace std;
class base
{
public:
    virtual void fun()
    {
        cout << "It is the fun of base class" << endl;
    }

    virtual ~base()
    {
        cout << "Base destructor" << endl;
    }
};
class derived : public base
{
public:
    virtual void fun()
    {
        cout << "It is the method of derived class" << endl;
    }

    ~derived()
    {
        cout << "Derived destructor " << endl;
    }
};

int main()
{
    base *b1 = new base();
    base *b2 = new derived();
    b1->fun();
    b2->fun();
    // since pointer need to be deleted so
    delete b1; // due to this line of the code the base destructor is invoked since the pointer is of the base type
    delete b2; // the same thing happen here since the b2 pointer is of base class though it is using the derived class
    // here since only base destructor is called but not derived one, so if we wanna call the derived destructor we must make the base destructor virtual

    /* The main reason why we need virtual destructor(Base destructor to be virtual) ?
    = > when ever base(base pointer )is holding its children as seen above, it should call the children
    destructor rather than its since its is holding the children object not its own and if we don't use the
    virtual destructor there will be problem of memeory leak. so to solve these problem, we'll be using virtual destructor*/
}