#include<stdio.h>
void linearsearch(int arr[],int n,int key){
int found=0;
for(int i=0;i<n;i++){
if(arr[i]==key){
printf("Element found at index of %d\n",i);
found=1;
break;
}}
if(found==0){
printf("Element not found");
}
}
int main(){
int n,key;
printf("Enter the N:");
scanf("%d",&n);
int arr[n];
printf("Enter the Array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the Key element:");
scanf("%d",&key);
linearsearch(arr,n,key);
return 0;
}
