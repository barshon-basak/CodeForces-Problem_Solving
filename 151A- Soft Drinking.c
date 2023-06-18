#include <stdio.h>
 
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k, &l, &c, &d, &p, &nl, &np);
    int drink;
    drink = k*l;
    drink = drink/nl;
    int slices;
    slices = c*d;
    int salt;
    salt = p/np;
    int toasts;
    toasts = drink;
    if(drink>slices){
        toasts= slices;
    }
    if(toasts>salt){
        toasts = salt;
    }
    printf("%d",toasts/n);
    return 0;
}
