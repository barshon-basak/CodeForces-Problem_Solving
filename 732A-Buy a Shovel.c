#include<stdio.h>

int main(){
	int p,i,num;
	scanf("%d",&p);
	scanf("%d",&num);
		
for( i=1; i<=10000; i++){
		if((p*i)%10==0 || (p*i)%10== num)
		{ printf("%d",i);
		break;
		}}

return 0;		
}
