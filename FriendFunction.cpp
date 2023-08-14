#include<iostream>
using namespace std;

class A{
    private : 
        int private_A;
    protected:
        int protected_A;

    public:
        A()
        {
            private_A = 10;
            protected_A = 20;
        }

        void getData()
        {
            cout << "Private : " << this->private_A << endl;
            cout << "Protected : " << this->protected_A;
        }
    
    friend void friendAccess(A& obj);
};

void friendAccess(A& obj){
    obj.private_A = 20;
    obj.protected_A = 10;
}

int main()
{
    A obj;
    obj.getData();
    friendAccess(obj);
    cout << "\nAfter friend access : " << endl;
    obj.getData();

    return 0;

}