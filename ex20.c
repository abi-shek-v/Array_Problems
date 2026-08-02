/*
20. Write a C program to determine whether the elements of an array
    are arranged in descending order.Display an appropriate message based on the result.
*/
#include<stdio.h>

int main()
{
    int n;
    int descending = 1;

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
        if(arr[i] < arr[i + 1])
        {
            descending = 0;
            break;
        }
    }

    if(descending)
    {
        printf("The array is in descending order.\n");
    }
    else
    {
        printf("The array is not in descending order.\n");
    }

    return 0;
}
