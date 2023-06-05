#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,temp;

scanf("%d",&n);
int Arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&Arr[i]);
}
for(int j=0;j<n-1;j++){

for(int i=0;i<n-j-1;i++){

    if(Arr[i]>=Arr[i+1]){
        temp=Arr[i];
        Arr[i]=Arr[i+1];
        Arr[i+1]=temp;
    }
}
}

for(int i=0;i<n;i++){
    printf("%d ",Arr[i]);
}
    return 0;
}
