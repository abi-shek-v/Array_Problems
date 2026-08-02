/*
21. Write a C program to insert a new element into an array
    at a specified position.Shift the existing elements accordingly.
*/
#include<stdio.h>

int main()
{
    int n, pos, element;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the new element: ");
    scanf("%d", &element);

    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;

    printf("Array after insertion: ");
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
