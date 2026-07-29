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
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
