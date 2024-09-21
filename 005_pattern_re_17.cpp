#include <iostream>
using namespace std;

int main()
{

    int rows, cols;
    cout << "Enter the no of rows: ";
    cin >> rows;

    int i = 0, j = 0;
    while (i < rows)
    {
        j = 1;
        while (j <= rows - i)
        {
            cout << j << " ";
            j++;
        }
        j = 0;
        while (j < 2 * i)
        {
            cout << "*" << " ";
            j++;
        }
        j = 0;
        while (j < rows - i)
        {
            cout << rows - j << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}