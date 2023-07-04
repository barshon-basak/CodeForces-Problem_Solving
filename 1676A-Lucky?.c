#include <stdio.h>
#include<stdlib.h>
int main()
{
   int t,num;
   scanf("%d",&t);
   while(t--){
       int sum1=0,sum2=0;
       char str[7];
       scanf("%s",str);
       num= atoi(str);
       
       int n=3;
       while(n--){
           sum1 = sum1+ num%10;
           num=num/10;
       }
        n=3;
       while(n--){
           sum2 = sum2+ num%10;
           num=num/10;
       }
       
       if(sum1== sum2) printf("YES\n");
       else  printf("NO\n");
   }

    return 0;
}
