#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%47 == 0 || n==474 || n%74==0 || n == 744 || n % 4 == 0 || n % 7 == 0|| n%774==0|| n%477==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
