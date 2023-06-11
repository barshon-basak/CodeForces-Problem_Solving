#include<stdio.h>
int main(){
int n,k;
int i=1;
scanf("%d %d",&n,&k);
int sum= k;
int count=0;

for(i=1; i<=n ; i++ ){
  sum += i*5;
    if(sum <= 240){
   count++;
    }
    else break;
}

printf("%d",count);

return 0;
}
