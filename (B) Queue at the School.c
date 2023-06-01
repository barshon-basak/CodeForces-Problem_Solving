#include<stdio.h>
#include<string.h>

int main(){
	int n,x,t;
scanf("%d%d",&n,&t);
char str[302];
scanf("%s",str);

	for(int m=1;m<=t;m++){
		 for(x = 0; x < n-1; x++)
        {
            if(str[x] == 'B' && str[x+1] == 'G')
            {
               str[x] = 'G';
               str[x+1] = 'B';
               x++;
            }
        }
	}

	puts(str);
	return 0;
}
