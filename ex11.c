/*
11. Write a C program to reverse the elements of a one-dimensional array.
*/
#include<stdio.h>
void reverse(int arr[],int n){
int temp;
int left=0;
int right =n-1;
while(left<right){
temp=arr[left];
arr[left]=arr[right];
arr[right]=temp;
left++;
right--;
}
printf("reversed array\n");
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
printf("\n");
}
int main(){
int n;
printf("Enter the N:");
scanf("%d",&n);
int arr[n];
printf("Enter the Array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
reverse(arr,n);
return 0;
}
