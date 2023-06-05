#include<stdio.h>

int main(){

int ans, w, k,n;
scanf("%d",&k);
scanf("%d",&n);
scanf("%d",&w);
int total=0;

for(int i=1; i<=w; i++){
    total=total+ (i*k);
}
ans = (total- n);
if(ans<0){
    printf("0");
}
else{
printf("%d",ans);
}
return 0;
}
