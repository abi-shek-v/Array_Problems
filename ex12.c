/*
12. Write a C program to copy all elements from one array to another array.
*/
#include<stdio.h>
int main(){
int n;
printf("Enter the N:");
scanf("%d",&n);
int arr1[n],arr2[n];
printf("Enter the Array:");
for(int i=0;i<n;i++){
scanf("%d",&arr1[i]);
}
printf("The array1 is ");
for(int i=0;i<n;i++){
printf("%d ",arr1[i]);
}
printf("\n");
printf("The array 2 is ");
for(int i=0;i<n;i++){
arr2[i]=arr1[i];
printf("%d ",arr2[i]);
}
printf("\n");
return 0;
}
