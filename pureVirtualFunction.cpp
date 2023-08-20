#include<iostream>
using namespace std;


class A{
    public:
        void fun1()
        {
            cout << "\nNo object of this class can be created as this contain a pure virtual function in it";
        }

        virtual void fun2() = 0;
        
};
class B : public A{
    public : 
        void fun2()
        {
            cout << "\nThis is pure virtual function definition of class A";
        }
};


int main()
{
    B obj;
    obj.fun1();
    obj.fun2();
    return 0;
}