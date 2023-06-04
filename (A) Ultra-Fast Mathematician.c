#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000];
    gets(str1);
    gets(str2);
    int sl=strlen(str1);
    for(int i=0;i<sl;i++)
    {
        if(str1[i]==str2[i])
            printf("0");
        else
            printf("1");
    }
    return 0;
}
