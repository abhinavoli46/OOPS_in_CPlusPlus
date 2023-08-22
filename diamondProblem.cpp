#include<iostream>
using namespace std;


class A{
    public: 
        int a;
        void funA()
        {
            cout << "Grandparent";
        }
};

class B1 : virtual public A{
    public:
        int b1;
        void funB1()
        {
            cout << "Parent1";
        }

};

class B2 : virtual public A{
    public:
        int b2;
        void funB2()
        {
            cout << "\nParent2";
        }
};
class C : public B1,public B2{
    public:
        int c;
        void funC()
        {
            cout << "\nChild";
        }

};
int main()
{
    C obj;
    cout <<"\nA : " << sizeof(A);
    cout <<"\nB1 : " <<sizeof(B1);
    cout <<"\nB2 : " <<sizeof(B2);
    cout <<"\nC : " <<sizeof(C);
    return 0;
}