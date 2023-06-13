#include<stdio.h>
#include<ctype.h>
int main(){
    int n;
char str[101];
scanf("%d",&n);
while(n--){
scanf("%s",str);
int l=strlen(str);

if(l>10){

    printf("%c",str[0]);
    printf("%d",l-2);
    printf("%c\n",str[l-1]);

}
else printf("%s\n",str);

}
return 0;
}
