#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){

int km;
scanf("%d",&km);
for(int i=1; i<=km; i++){

    char str[4];
    //char str2[4];
    char str3[4] = "yes";

    scanf("%s",&str);

 strlwr(str);


   int n = strcmp(str,str3);

    if (n==0){
        printf("YES\n");
    }
    else printf("NO\n");

}
    return 0;
    }
