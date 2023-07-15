#include<iostream>
using namespace std;

class A
{
    public :
        void fun1()
        {
            cout << "\nThis is function1 of parent class A";
        }
        void fun2()
        {
            cout << "\nThis is function2 of parent class B";
        }
};
class B : public A
{
    public:
        void fun1()
        {
            cout << "\nThis is function1 of child class B";
        }
        void fun2(int x)
        {
            cout << "\nThis is function2 of child class B";
        }
};
int main()
{

    B obj;
    obj.fun1();
    // obj.fun2()       gives error
    obj.fun2(5);
    return 0;
}