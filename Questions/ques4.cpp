// Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions 
// for each operation whose real and imaginary parts are entered by the user.
#include<iostream>
using namespace std;
class Complex{

    private:
        int real;
        int imaginary;

    public :
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

        Complex operator + (Complex obj)
        {
            Complex temp;
            temp.real = this->real + obj.real;
            temp.imaginary = this->imaginary + obj.imaginary;
            return temp;
        }

        Complex operator - (Complex obj)
        {
            Complex temp;
            temp.real = this->real - obj.real;
            temp.imaginary = this->imaginary - obj.imaginary;
            return temp;
        }

        friend ostream & operator << (ostream &ost, const Complex &obj);

};

ostream & operator << (ostream& ost,const Complex& obj)
{
    ost << obj.real << "+" << obj.imaginary << "i";
    return ost;
}




#include<iostream>
using namespace std;

int main()
{
    Complex c1(2,3);
    Complex c2(4,1);
    cout << "\nAddition : " << c1 + c2;
    cout << "\nSubtraction : " << c1 - c2;
    
    return 0;
}