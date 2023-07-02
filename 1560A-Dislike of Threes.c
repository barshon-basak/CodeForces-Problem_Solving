#include <stdio.h>
int main()
{
   int t,n;
   scanf("%d",&t);
   while(t--){
       int i,count=0;
       scanf("%d",&n);
       
    for(int i=1;i<=n ; i++){
        count++;
        if(count%3 == 0 || count%10 ==3){
            count++;
        }
         if(count%3 == 0 || count%10 ==3){
            count++;
        }
    }
printf("%d\n",count);
       
   }
    return 0;
}
