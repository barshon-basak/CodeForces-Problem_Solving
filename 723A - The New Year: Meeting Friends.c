#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int ans=(abs(a-b)+abs(b-c)+abs(c-a))/2;
    printf("%d",ans);
    return 0;
}
