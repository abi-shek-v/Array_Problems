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

    int smallest = arr[0];
    int secondSmallest = arr[1];

    if(secondSmallest < smallest)
    {
        int temp = smallest;
        smallest = secondSmallest;
        secondSmallest = temp;
    }

    for(int i = 2; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    printf("Smallest element = %d\n", smallest);
    printf("Second smallest element = %d\n", secondSmallest);

    return 0;
}
