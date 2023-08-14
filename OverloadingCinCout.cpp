#include<iostream>
using namespace std;

class Complex
{
    private :
        int rPart;
        int cPart;

    public:
        Complex()
        {
            this->rPart = 0;
            this->cPart = 0;
        }

        Complex(int a,int b)
        {
            this->rPart = a;
            this->cPart = b;
        }

        friend ostream& operator <<(ostream& dout, Complex& c);
        friend istream& operator >>(istream& din, Complex& c);
};

ostream& operator << (ostream& dout, Complex& c)
{
    dout << c.rPart << "+" << c.cPart << "i";
    return dout;
}

istream& operator >>(istream& din,Complex& c)
{
    din >> c.rPart >> c.cPart;
    return din;

}

int main()
{
    Complex obj;
    cin >> obj;
    cout << obj;

}