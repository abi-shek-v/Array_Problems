#include<stdio.h>
int main(){
int n;
printf("Enter the N:");
scanf("%d",&n);
int arr[n];
printf("Enter the Array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int largest=arr[0];
for(int i=1;i<n;i++){
if(arr[i]>largest){
largest=arr[i];
}
}
printf("Largest Element is %d",largest);
printf("\n");
return 0;
}
