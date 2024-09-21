#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getInfo()
    {
        cout << name << " - " << age << endl;
    }
};

class Student : public Person
{
public:
    // name, age roll no
    int rollno;

    void getInfo()
    {
        cout << rollno << " - " << name << " - " << age << endl;
    }
};

class GradStudent : public Student
{
public:
    string researchArea;

    void getInfo()
    {
        cout << rollno << " - " << name << " - " << age << " - " << researchArea << endl;
    }
};

int main()
{
    // Student s1("Priya", 17, 015);
    // s1.getInfo();
    GradStudent g1;
    g1.name = "Tony";
    g1.rollno = 456;
    g1.researchArea = "Quantum Mechanics";
    g1.getInfo();
}