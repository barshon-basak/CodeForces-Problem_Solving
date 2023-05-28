#include<stdio.h>
int main()
{
    int n,i,a=0;
    scanf("%d\n",&n);
    char s[n];
    gets(s);

    for ( i=0; i<n;i++ )
    {

        if ( s[i]==s[i+1])
        {
            a++;
        }
    }
      printf("%d\n",a);
    return 0;
}
