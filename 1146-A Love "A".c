#include <stdio.h>
int main()
{
int count=0;
int i=0;
char str[51];
scanf("%s",str);
for(i=0; str[i] != '\0' ; i++){
    if(str[i] == 'a'){
        count ++;
    }
}
int ans = 2*count -1;
if ( ans >= i){
    ans = i;
}
printf("%d",ans);
    return 0;
}
