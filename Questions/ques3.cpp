//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' 
//with the constructor having the three sides as its parameters.
#include<bits/stdc++.h>
using namespace std;

class Triangle{
    private :
        double sideA;
        double sideB;
        double sideC;
    public :
        Triangle()
        {
            this->sideA = 0.0;
            this->sideB = 0.0;
            this->sideC = 0.0;
        }

        Triangle(double sideA,double sideB,double sideC)
        {
            this->sideA = sideA;
            this->sideB = sideB;
            this->sideC = sideC;
        }

        double calcArea()
        {
            double a = this->sideA;
            double b = this->sideB;
            double c = this->sideC;
            double s = (a + b + c)/2.0;
            double product = s * (s-a) * (s-b) * (s-c);
            return sqrt(product);

        }
};

int main()
{
    Triangle t1(2.3,6.5,7.9);
    cout << "\nArea is : " << t1.calcArea();
    return 0;
}
