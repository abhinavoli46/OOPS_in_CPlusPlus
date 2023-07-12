#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imaginary;
    public:
        Complex()
        {
            this->real = 0;
            this->imaginary = 0;
        }
        Complex(int real,int imaginary)
        {
            this->real = real;
            this->imaginary = imaginary;
        }
               //
        Complex add(Complex c1,Complex c2)
        {
            Complex temp(0,0);
            temp.real = c1.real + c2.real;
            temp.imaginary = c1.imaginary + c2.imaginary;
            return temp;
        }
        int getReal()
        {
            return this->real;
        }
        int getImaginary()
        {
            return this->imaginary;
        }
        
};
int main()
{
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3;
    c3 = c3.add(c1,c2);

    cout << c3.getReal() << " " << c3.getImaginary();
    return 0;
}