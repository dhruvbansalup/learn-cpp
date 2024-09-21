#include <iostream>
using namespace std;

int main()
{
    int x = -1344;
    int new_num = 0, rem = 0;
    while (x != 0)
    {
        rem = x % 10;
        x = x / 10;
        new_num = (new_num * 10) + rem;
    }
    cout << new_num;
}