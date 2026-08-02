#include<stdio.h>

int main()
{
    int n, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to remove: ");
    scanf("%d", &key);

    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != key)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    printf("Array after removing %d: ", key);
    for(int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
