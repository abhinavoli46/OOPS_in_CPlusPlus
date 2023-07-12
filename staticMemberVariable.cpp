#include<iostream>
using namespace std;

class Hello
{
    private: 
        int a;
        public:
        static int b;
    
        Hello(int a)
        {
            this->a = a;
        }
        void printA()
        {
            cout << this->a << b; 
        }
        static void set_b(int a)
        {
            b = a;
        }
        static int get_b()
        {
            return b;
        }
        
    };
//If we have declared static member inside the class we need to give it memory 
//first so that it can be accessed later without creating object.
//If we do not initialize it here it is having default value as 0.
//To define it here is necessary
int Hello::b;
int main()
{
    //Accessing the static variables of class with the help of className
    //and prior of any type of object creation
    //Because static members are variables of class not the objects.
    //Also static functions can only access the static data.
    Hello::set_b(5);
    cout << Hello::get_b();
}