#include<stdio.h>
#include<math.h>

int main(){
int n;
    scanf("%d",&n);
int result=0;;
    for(int i=1; i<=n;i++){
        result= result+((pow(-1,i)*i));
    }
    printf("%d",result);
    return 0;
}
