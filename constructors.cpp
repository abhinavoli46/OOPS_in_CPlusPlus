#include<iostream>
using namespace std;

class Complex
{
    private : 
        int x;
        int y;
    public:
    //Default Constructor
        Complex()
        {
            x = 0;
            y = 0;
        } 
    //Parameterized Constructor
        Complex(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
    //Copy Constructor
        Complex(Complex &obj)
        {
            x = obj.x;
            y = obj.y;
        }
    //Destructor
        ~Complex()
        {
            cout << "\nDestructor Called";
        }

        void print()
        {
            cout << "\nReal : " << this->x;
            cout << "\nImaginary : " << this->y;
        }

};



int main()
{
    Complex c1;
    Complex c2(3,5);
    Complex c3 = c2;
    c1.print();     //Prints 0 and 0
    c2.print();     //Prints 3 and 5
    c3.print();     //Prints 3 and 5
    return 0;
}