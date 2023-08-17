#include<iostream>
using namespace std;

class A
{
    public :
        void fun1()
        {
            cout << "\nThis is base class A function";
        }
        virtual void fun2()
        {
            cout << "\nFUn2";
        }
};

class B : public A
{
    public : 
        void fun1()
        {
            cout << "\nThis is a child class B function";
        }
        void fun2()
        {
            cout << "\nFun2child";
        }
};

int main()
{
    B obj;
    obj.fun1();
    obj.fun2();
    A* ptr = &obj;
    ptr->fun1();
    ptr->fun2();
    return 0;
}