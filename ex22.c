#include<stdio.h>

int main()
{
    int n, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    for(int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
