#include<iostream>
using namespace std;

class Complex
{
    private:
        int a;
        int b;
    public:
        Complex()
        {
            a = 0;
            b = 0;
        }
        Complex(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        void showData()
        {
            cout << "\nReal : " << this->a;
            cout << "\nImaginary : " << this->b;
        }

        Complex operator -(Complex x)
        {
            Complex temp;
            temp.a = a - x.a;
            temp.b = b - x.b;
            return temp;
        }



};
int main()
{
    Complex c1 = Complex(2,3);
    Complex c2 = Complex(3,5);
    c1.showData();
    c2.showData();
    Complex c3 = c1 - c2;
    c3.showData();

}