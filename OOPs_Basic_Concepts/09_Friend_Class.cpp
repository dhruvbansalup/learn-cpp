// Friend Class:
// A friend class is a class that is granted access to the private and protected members of another class. By declaring a class as a friend, you allow all its member functions to have access to the private data of the class that declared the friendship.

// Key Points:
// All member functions of the friend class can access the private and protected members of the class that declared the friendship.
// Friendship is not mutual, i.e., if class A is a friend of class B, B does not automatically become a friend of A.

#include<iostream>
using namespace std;

class B;  // Forward declaration

class A {
    private:
        int numA;
    public:
        A() : numA(10) {}  // Constructor to initialize numA
        friend class B;  // Declaring B as a friend class
};

class B {
    private:
        int numB;
    public:
        B() : numB(20) {}  // Constructor to initialize numB
        void displayA(A& objA) {
            // Accessing private member of class A
            cout << "Private member of A: " << objA.numA << endl;
        }
};

int main() {
    A objA;
    B objB;
    objB.displayA(objA);  // B can access private members of A
    return 0;
}
