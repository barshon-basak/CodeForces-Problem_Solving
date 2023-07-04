#include<stdio.h>
#include<math.h>
int main(){
	int t, hour,ans,min;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d %d",&hour,&min);
		
		ans= (abs(hour-23))*60;
		ans= ans+ (60-min);
		
		printf("%d\n",ans);
		}
		return 0;
	}
