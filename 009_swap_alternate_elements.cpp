#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << (i < size - 1 ? " , " : "\n");
    }
}

void swap_alternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(arr, 9);
    swap_alternate(arr, 9);
    print(arr, 9);
    
    return 0;
}