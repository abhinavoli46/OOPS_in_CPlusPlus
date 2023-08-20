// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. 
// Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
#include <iostream>
using namespace std;

class Student{
    private : 
        string name;
        int rollNo;

    public : 
        Student()
        {
            this->name = "";
            this->rollNo = 0;
        }
        Student(string name,int rollNo)
        {
            this->name = name;
            this->rollNo = rollNo;
        }

        void printName()
        {
            cout << "\nName : " << this->name;
            cout << "\nRoll No. : " << this->rollNo;
        }
};


int main()
{
    Student s1("John",2);

    s1.printName();
    return 0;
}