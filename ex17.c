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

    int largest = arr[0];
    int secondLargest = arr[1];

    if(secondLargest > largest)
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for(int i = 2; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d\n", secondLargest);

    return 0;
}
