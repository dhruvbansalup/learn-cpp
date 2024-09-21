#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    // AND
    cout << "a&b = " << (a & b) << endl;
    // OR
    cout << "a|b = " << (a | b) << endl;
    // NOT
    cout << "~a = " << ~a << endl;
    // XOR
    cout << "a^b = " << (a ^ b) << endl;

    // Left Shift
    cout << "a<<2 = " << (a << 2) << endl;
    cout << "19<<1 = " << (19 << 1) << endl;
    cout << "21<<2 = " << (21 << 2) << endl;
    // Right Shift
    cout << "15>>1 = " << (15 >> 1) << endl;
    cout << "15>>2 = " << (15 >> 2) << endl;
    cout << "17>>2 = " << (17 >> 2) << endl;
}