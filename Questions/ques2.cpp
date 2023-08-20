// Assign and print the roll number, phone number and address of two students having 
// names "Sam" and "John" respectively by creating two objects of the class 'Student'.

#include<iostream>
using namespace std;

class Student{
    private :
        int roll;
        string name;
        string phone;
        string address;

    public :
        Student()
        {
            this->roll = 0;
            this->name = name;
            this->phone = "";
            this->address = "";
        }
        Student(int roll,string name, string phone,string address)
        {
            this->roll = roll;
            this->name = name;
            this->phone = phone;
            this->address = address;
        }

        void printDetails()
        {
            cout << "\nRoll No. : " << this->roll;
            cout << "\nName : " << this->name;
            cout << "\nPhone : " << this->phone;
            cout << "\nAddress : " << this->address;
        }


};
int main()
{
    Student sam(1,"Sam","6983882392","JNU, Delhi");
    Student john(2,"John","9898738743","BHU, Varanasi");

    sam.printDetails();
    cout << endl;
    cout << "-----------------------";
    john.printDetails();
    return 0;
}