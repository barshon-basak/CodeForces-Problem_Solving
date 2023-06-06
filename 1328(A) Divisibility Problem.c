#include<stdio.h>

int main(){
int rem,ans;
int t;
int a,b;
scanf("%d",&t);

for(int m=0; m<t ; m++){
  scanf("%d%d",&a,&b);
  if(a%b==0){
    printf("0\n");
  }
  else{
        rem = a%b;
        ans= b-rem;
     printf("%d\n",ans);
    }
  }
return 0;
}
