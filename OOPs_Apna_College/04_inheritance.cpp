#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Person()
    {
        cout << "Parent Constructor" << endl;
    }
    ~Person()
    {
        cout << "Parent Distructor" << endl;
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

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }

    Student()
    {
        cout << "Child Constructor" << endl;
    }
    ~Student()
    {
        cout << "Child Distructor" << endl;
    }
};

int main()
{
    Student s1("Priya", 17, 015);
    s1.getInfo();
}