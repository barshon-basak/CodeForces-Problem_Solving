#include <stdio.h>

int main() {
    int n,k,count=0;
  scanf("%d",&n);
  int Arr[n];
    scanf("%d",&k);
for(int i=0;i<n; i++){
    scanf("%d",&Arr[i]);
}
for(int i=0;i<n; i++){
    if(Arr[i]+k<=5){
        count++;
    }
}
printf("%d",count/3);
    return 0;
}
