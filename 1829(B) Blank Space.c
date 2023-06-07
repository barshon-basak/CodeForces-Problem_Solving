#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,t ;
  int max=0;
  int count=0;
  scanf("%d",&t);

  while(t--){
max=0;
count=0;
     scanf("%d",&n);
      int Arr[n];
      for(int i=0; i<n; i++){
        scanf("%d",&Arr[i]);
      }
     for(int m=0; m<n; m++){
        if(Arr[m]== 0){
            count++;
        }
        else {
            if(max<count){
                max=count;
                count=0;
            }
            else count=0;
        }

     }
     if(max<count){
                max=count;}
     printf("%d\n",max);
  }
    return 0;
}
