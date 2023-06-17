#include<stdio.h>
#include<math.h>

int function(int num){
int dig=0;
while(num>0){
        dig++;
        num=num/10;
    }
    return dig;
}

int main()
{
    int t,dig,num;
    int Arr[4];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        int temp = num;
        dig = function(num);
      int j=0;
     for(int i=0; i <dig-1; i++){
        if(num % 10 != 0){
        Arr[j] = (pow(10,i)*(num%10));
        j++;
        num = num/10;

        }
        else num = num/10;
     }

     if(j == 0){
        printf("1\n");
        printf("%d\n",temp);
     }
     else {
         printf("%d\n",j+1);
         for(int k =0; k<j ; k++){
            printf("%d ",Arr[k]);
         }
int yo= num * pow(10,(dig-1));
printf("%d\n",yo);
     }
    }
return 0;
}
