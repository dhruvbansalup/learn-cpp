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

    // deep Copy constructor
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *this->cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << name << " - " << *cgpaPtr << endl;
    }
    
};

main()
{
    Student s1("Rahul Kumar", 8.8);
    Student s2(s1);
    s1.getInfo();
    s2.getInfo();
    s2.name = "neha";
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.getInfo();
}