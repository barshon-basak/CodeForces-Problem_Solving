#include<stdio.h>

int main(){

int n,k;
scanf("%d",&n);
scanf("%d",&k);
int arr[n];
int bruh;
int count=0;

for(int i=0; i<n ; i++){
scanf("%d",&arr[i]);
}

bruh = arr[k-1];

for(int i=0; i<n ; i++){
    if(arr[i]>= bruh && arr[i] > 0){
        count ++;
    }
}
printf("%d",count);

return 0;}
