#include<stdio.h>

int main(){

char str[201];
scanf("%s",str);

for(int i=0; str[i] != '\0' ; ){
    char c= str[i];
    if(c == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
        if(i==0){
        i=i+3;
        }
    else{
        printf(" ");
        i= i+3;
    }
}
    else{
        printf("%c",c);
        i++;
}
}
return 0;
}
