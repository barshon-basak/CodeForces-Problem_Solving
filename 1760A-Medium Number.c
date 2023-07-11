#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,ans,diff,c,sml,lar;
	    int min=10000;
	    scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
	    if(a>=c) lar=a;
	    else lar=c;
	}
	else {
	     if(b>=c) lar=b;
	    else lar=c;
	}
	if(a<b){
	    if(a>=c) sml=c;
	    else sml=a;
	}
	else {
	     if(b>=c) sml=c;
	    else sml=b;
	}
	
	for(int i=sml; i<=lar; i++){
	    diff= abs(i-a)+ abs(i-b)+ abs(i-c);
	    if(diff<min){
	        min=diff;
	        ans=i;
	    }
	}
	printf("%d\n",ans);
	}
}
