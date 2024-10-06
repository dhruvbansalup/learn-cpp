#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    // constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double; // new keyword is used to create a variable in heep not in stack
        *cgpaPtr = cgpa;
    }

    // destructor
    ~Student()
    {
        cout << "Everything Deleted" << endl;
    }

    void getInfo()
    {
        cout << name << " - " << *cgpaPtr << endl;
        delete cgpaPtr; // deleting Dianamic allocated memory
    }
};

main()
{
    Student s1("Rahul Kumar", 8.8);
    Student s2("Priya", 8.5);
    s1.getInfo();
    s2.getInfo();
}