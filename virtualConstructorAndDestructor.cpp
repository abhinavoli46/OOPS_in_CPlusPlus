#include<iostream>
using namespace std;


class Parent{

    public:
        Parent()
        {
            cout << "\nParent Created";
        }
        virtual ~Parent()
        {
            cout << "\nParent Deleted";
        }
};

class Derived : public Parent
{
    public:
        Derived()
        {
            cout << "\nChild Created";
        }
        ~Derived()
        {
            cout << "\nChild Deleted";
        }
};

int main()
{
    Parent* ptr = new Derived;
    delete ptr;

    return 0;
}