#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)
        {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
    return 0;
}
