#include<stdio.h>

int main()
{
    int n;
    int evenSum = 0, oddSum = 0;

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
        if(arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    printf("Sum of even elements = %d\n", evenSum);
    printf("Sum of odd elements = %d\n", oddSum);

    return 0;
}
