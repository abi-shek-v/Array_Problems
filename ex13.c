#include<stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = 0;
        }
    }

    printf("Modified array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
