#include <stdio.h>

int main() {
    int t;
scanf("%d",&t);
while(t--){
    int a,min,max,ans,b;
    scanf("%d %d",&a,&b);
    
    if(a>=b){
        min=b;
        max=a;
    }
    else {
        min=a;
        max=b;
    }
    
    if(min*2>=max){
        ans=min*2;
    }
    else ans= max;
    
    printf("%d\n",ans*ans);
}
    return 0;
}
