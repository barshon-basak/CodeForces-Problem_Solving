#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0; k<t; k++)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }
        if(array[0]==array[1])
        {
            for(int i=0; i<n; i++)
            {
                if(array[i]!=array[0])
                {
                    printf("%d\n",i+1);
                }
            }
        }
        else if(array[0]==array[2])
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
}
