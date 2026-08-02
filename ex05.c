/*
5. Write a C program to find and display the smallest element
   in a one-dimensional array.
*/
#include<stdio.h>
int main(){
int n,sum=0;
float total;
printf("Enter the N:");
scanf("%d",&n);
int arr[n];
printf("Enter the Array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
sum=sum+arr[i];
}
total=sum/2;
printf("Sum of the Array is %d\n",sum);
printf("Average of the Array is %.2f",total);
printf("\n");
return 0;
}
