#include<stdio.h>

int main()
{
    int n;
    int ascending = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            ascending = 0;
            break;
        }
    }

    if(ascending)
    {
        printf("The array is in ascending order.\n");
    }
    else
    {
        printf("The array is not in ascending order.\n");
    }

    return 0;
}
