/*
14. Write a C program to multiply each element of an array by a user-specified constant and display the updated array.
*/
#include<stdio.h>

int main()
{
    int n, constant;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the constant value: ");
    scanf("%d", &constant);

    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * constant;
    }

    printf("Updated array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
