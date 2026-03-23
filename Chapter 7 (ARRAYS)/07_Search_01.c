#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int find;
    printf("\nEnter element to find: ");
    scanf("%d", &find);

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find) 
        {
            flag = true;
            break; 
        }
    }

    if (flag == true)
    {
        printf("\n%d is present in the array.\n", find);
    }
    else
    {
        printf("\n%d is not present in the array.\n", find);
    }

    return 0;
}
