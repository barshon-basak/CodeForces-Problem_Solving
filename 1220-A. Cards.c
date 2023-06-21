#include <stdio.h>
int main()
{
int n;
int zero=0;
int one= 0;
scanf("%d",&n);
char str[n+1];
scanf("%s",str);

for(int i = 0; str[i] != '\0' ; i++){
    if(str[i] == 'z'){
        zero++;
    }
    if(str[i] == 'n'){
        one++;
    }
}
for(int k = 1; k <=one ; k++){
    printf("1 ");
}
for(int k = 1; k <=zero ; k++){
    printf("0 ");
}
    return 0;
}
