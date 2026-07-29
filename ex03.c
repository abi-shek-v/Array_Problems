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
int smallest=arr[0];
for(int i=1;i<n;i++){
if(arr[i]<smallest){
smallest=arr[i];
}
}
printf("Smallest Element is %d",smallest);
printf("\n");
return 0;
}
