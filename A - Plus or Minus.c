#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str1[t];
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(c==a+b)
        {
            str1[i]='+';
        }
        else
        {
            str1[i]='-';
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%c\n",str1[i]);
    }
    return 0;
}
