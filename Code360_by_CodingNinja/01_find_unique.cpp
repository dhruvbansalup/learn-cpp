#include <cstddef>

int findUnique(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == NULL)
            {
                break;
            }
            if (arr[i] == arr[j])
            {
                arr[i] = NULL;
                arr[j] = NULL;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != NULL)
        {
            return arr[i];
        }
    }

    // M2
    // int ans=0;
    // for(int i=0;i<size;i++){
    //     ans=ans^arr[i];
    // }
    // return ans;
}