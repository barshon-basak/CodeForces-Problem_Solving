#include <stdio.h>

int main() {
    int n,min,a,ans,b,max;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a, &b);
        
        if(a>=b){
            min=b;
            max=a;
        }
        else {
            min=a;
            max=b;
        }
        ans= ((min/2)*max + (min%2)*((max+1)/2));
        printf("%d\n",ans);
    }
    return 0;
}
