#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[10] = {1, 3, 6, 1, 2, 3, 7, 1, 7, 2};
    // int DuplicateCount = 0;
    for (int i = 0; i < 10; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("\nThe unique element is %d ", arr[i]);
            break;
        }
    }
    // printf("\nNumber Of duplicate element found are %d" , DuplicateCount);

    return 0;
}