#include<stdio.h>
int main()
{

   long long int  n,result;
    scanf("%lld",&n);

   if(n%2==0)
    {
       result=n/2;
        printf("%lld\n",result);
    }
    else if(n%2==1)
    {
     result=-((n+1)/2);
     printf("%lld\n",result);

    }
}
