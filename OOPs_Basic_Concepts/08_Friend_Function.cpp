// Friend Function:
// A friend function is a function that is not a member of a class but can access the private and protected members of that class. It is declared using the keyword friend inside the class. The friend function is useful when you need to allow external functions to access private data of a class while keeping the rest of the class's data members private to other functions.

// Key Points:
// It is not a member function of the class, so it is called like a regular function.
// It has access to private and protected members of the class.
// The function needs to be explicitly declared as a friend within the class.

#include<iostream>
using namespace std;

class Box {
    private:
        int length;
    public:
        Box(int n) : length(n) {}  // Constructor to initialize length to 0
        // Friend function declaration
        friend int getLength(Box);
};

// Friend function definition
int getLength(Box b) {
    return b.length;  // Can access the private member 'length' directly
}

int main() {
    Box b(25);
    cout << "Length of box: " << getLength(b) << endl;  // Calling friend function
    return 0;
}
