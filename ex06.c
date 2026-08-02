#include<stdio.h>
void Evenodd(int arr[],int n,int *even,int *odd){
for(int i=0;i<n;i++){
if(arr[i]%2==0)
(*even)++;
else
(*odd)++;
}
}
int main(){
int even=0,odd=0;
int n;
printf("Enter the N value:");
scanf("%d",&n);
int arr[n];
printf("Enter the array values:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
Evenodd(arr,n,&even,&odd);
printf("Even=%d\n",even);
printf("odd=%d\n",odd);
return 0;
}
