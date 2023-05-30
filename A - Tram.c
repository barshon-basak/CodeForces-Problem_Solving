#include<stdio.h>

int main(){

int stop,out,in;
int diff=0;
scanf("%d",&stop);
int arr[stop];

for(int i=0; i<stop; i++){

scanf("%d",&out);
scanf("%d",&in);

diff= diff+in-out;

arr[i]= diff;
}

int max= arr[0];

for(int i=0; i<stop; i++){
    if(max<arr[i])
        max=arr[i];
}

printf("%d",max);
}
