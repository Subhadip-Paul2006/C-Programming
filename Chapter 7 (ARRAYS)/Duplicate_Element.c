#include <stdio.h>

int main()
{
    int arr[10] = {12, 34, 7, 69, 87, 34, 58, 7, 96, 73};
    int DuplicateCount = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if ( arr[i] == arr[j])
            {
                DuplicateCount++ ;
                printf("\n%d is a duplicate element whose index are %d & %d" , arr[j] , i , j);
            }
        }
    }
    printf("\nNumber Of duplicate element found are %d" , DuplicateCount);

    return 0;
}