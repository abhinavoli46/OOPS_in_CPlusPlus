#include<iostream>
using namespace std;


class Integer
{
    private:
        int x;
    public:
        Integer()
        {
            this->x = 0;
        }
        Integer(int x)
        {
            this->x = x;
        }
        //PreIncrement
        Integer operator ++ ()
        {
            Integer temp;
            temp.x = ++ (this->x);
            return temp;
        }
        //Post Increment : int is just passed so that compiler can distinguish between both versions of ++
        Integer operator ++ (int)
        {
            Integer temp;
            temp = (this->x) ++;
            return temp;
        }
        void display()
        {
            cout << "\nInteger : " << this->x;
        }
};
int main()
{
    Integer i1 = Integer(2);
    i1.display();
    i1++;
    i1.display();
    ++i1;
    i1.display();
    return 0;
}