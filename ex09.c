/*
9. Write a C program to count the frequency of a given element in a one-dimensional array.
*/
#include<stdio.h>
void frequency(int arr[],int n,int visited[]){
for(int i=0;i<n;i++){
if(visited[i]==1)
continue;
int count=1;
for(int j=i+1;j<n;j++){
if(arr[i]==arr[j]){
count++;
visited[j]=1;
}
}
printf("%d->%d\n",arr[i],count);
}
}
int main(){
int n;
printf("Enter the N:");
scanf("%d",&n);
int arr[n],visited[n];
printf("Enter the Array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
visited[i]=0;
}
frequency(arr,n,visited);
return 0;
}
