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
            this->a = 0;
            this->b = 0;
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

        Complex operator -()
        {
            Complex temp;
            temp.a = -(this->a);
            temp.b = -(this->b);

            return temp;
        }
};
int main()
{
    Complex c1 = Complex(3,4);
    Complex c2 = -c1;
    c1.showData();
    c2.showData();
    return 0;
}