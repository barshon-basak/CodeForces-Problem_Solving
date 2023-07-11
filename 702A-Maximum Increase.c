#include <stdio.h>

int main() {
    int n,count=1,max=1;
    scanf("%d",&n);
    int Arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&Arr[i]);
    }
     for(int i=1; i<n; i++){
         if(Arr[i]>Arr[i-1]){
             count++;
               if(max<count){
                 max=count;
             }
         }
         else {
             if(max<count){
                 max=count;
             }
             count=1;
         }
     }
   
     printf("%d",max);
    return 0;
}
