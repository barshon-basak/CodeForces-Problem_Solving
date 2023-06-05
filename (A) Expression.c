#include<stdio.h>

int main(){
int num1,num2,num3;
int result;
scanf("%d%d%d",&num1,&num2,&num3);


if(num1==1 && num3==1 && num3==1){
    result= num1+num2+num3;}

else if(num3==1){
    result=(num1*(num2+num3));
}
else if(num1==1){
    result=((num1+num2)*num3);
}

else if(num2==1){
    if(num1<=num3){
        result=((num1+num2)*num3);}
        else
            result =(num3+num2)*num1;
    }
else
{
     result=num1*(num2*num3);
}

printf("%d",result);
return 0;
}
