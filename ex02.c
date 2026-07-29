#include<stdio.h>
int main(){
int n,sum=0;
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
printf("Sum of the Array is %d ",sum);
printf("\n");
return 0;
}
