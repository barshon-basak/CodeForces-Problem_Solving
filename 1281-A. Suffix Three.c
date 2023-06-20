#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char arr[1006];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",arr);
		if(arr[strlen(arr)-1]=='o')
			printf("FILIPINO\n");
		else if(arr[strlen(arr)-1]=='u')
			printf("JAPANESE\n");
		else
			printf("KOREAN\n");
	}
}
