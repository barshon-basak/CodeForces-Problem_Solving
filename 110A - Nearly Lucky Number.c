#include<stdio.h>

int main(){

long long int rem,num;
scanf("%lld",&num);
int count = 0;
int digit = 0;
while(num>0){
        digit++;
    rem = num%10;
    if(rem == 4 || rem == 7)
        count++;
    num= num/10;
}

if(count == 4 || count == 7 ){
    printf("YES");
}
else printf("NO");

return 0;
}
