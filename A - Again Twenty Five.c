#include <stdio.h>
#include <math.h>

int main(){
    int n;
    long long int result,result1,result2,left,ans, right;

    scanf("%d",&n);
    result = pow(5,n);

    right = result%10;
    result2= result/10;

    left = result2%10;

    ans = left*10+right;

    printf("%lld",ans);
}
