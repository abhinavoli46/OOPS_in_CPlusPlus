//There exist an ambiguity in multiple inheritance when 2 classes which are being inherited have function with same name. If we call function 
//with object of inheriting class then the call will be ambigius as there exist two copies of the same function.
//To remove the ambiguity we use scope resolution operator while overriding the function in inheritimg class.

#include<iostream>
using namespace std;

class A
{
    public :
        void f1()
        {
            cout << "f1() of class A";
        }
};

class B
{
    public:
        void f1()
        {
            cout << "f1() of class B";
        }
};

class C : public A,public B
{
    public:     
        void f1()
        {
            A::f1();
            cout << endl;
            B::f1();
        }
};

int main()
{
    C obj;
    obj.f1();
    return 0;
}