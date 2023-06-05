#include<stdio.h>

int main(){
int t,a,b;
long long int n;
scanf("%d",&t);

for(int i=1; i<=t;t++){
    scanf("%lld",&n);
    int count = 0;
    for(b=1,a=n-b;a>b;b++,a--){
        count++;
    }

    printf("%d\n",count);
}
return 0;

}
