/*
7. Write a C program to count the number of positive, negative, and zero elements in an array.
*/
#include<stdio.h>
void ponegzero(int arr[],int n,int *pos,int *neg,int *zero){
for(int i=0;i<n;i++){
if(arr[i]>0){
(*pos)++;
}
else if(arr[i]<0){
(*neg)++;
}
else{
(*zero)++;
}
}
}
int main(){
int pos=0,neg=0,zero=0;
int n;
printf("Enter the n value:");
scanf("%d",&n);
int arr[n];
printf("Enter the array value:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
ponegzero(arr,n,&pos,&neg,&zero);
printf("Positive=%d\n",pos);
printf("Negative=%d\n",neg);
printf("Zero=%d\n",zero);
return 0;
}
