#include <iostream>
#include <string>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    // properties
    string name;
    string dept;
    string subject;

    // Constructor Overloading:
    // Constructor (Non-parameterized)
    Teacher()
    {
        cout << "This is a Non-parameterized constructor" << endl;
        salary = 50000; // setting default value
    }
    // Constructor (Parameterized)
    Teacher(string name, string dept, string subject, double salary)
    {
        cout << "This is a parameterized constructor" << endl;
        // setting default value
        this->name = name; // this-> / (*this) is a pointer for object
        (*this).dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // copy constructor - shallow copy
    Teacher(Teacher &originalObj) // pass by reference
    {
        cout << "I am custom copy constructor" << endl;
        this->name = originalObj.name;
        this->dept = originalObj.dept;
        (*this).salary = originalObj.salary;
        (*this).subject = originalObj.subject;
    }

    // methods / member fn
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
    void getInfo()
    {
        cout << "Name: " << name << " - " << subject << " - " << dept << " - " << salary << endl;
    }
};

int main()
{
    Teacher t1; // constructor call

    t1.name = "Ram";
    t1.subject = "Maths";
    t1.dept = "CSE";
    t1.setSalary(52820);
    t1.getInfo();
    /*
    cout << t1.name << " " << t1.subject;
    cout << t1.getSalary();
    */

    Teacher t2("Shyam", "Science", "Engineering", 105890), t3;
    t2.getInfo();

    // copy constructor
    Teacher t4(t1);
    t4.getInfo();

    return 0;
}
