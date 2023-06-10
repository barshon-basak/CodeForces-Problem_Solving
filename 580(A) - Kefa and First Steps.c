#include<stdio.h>
#include<math.h>>
int main(){
int n;
scanf("%d",&n);
int Arr[n];
int max=0;
int count=0;
for (int i = 0; i<n; i++){
    scanf("%d",&Arr[i]);
}
for (int i = 0; i<n-1; i++){

    if(Arr[i]<=Arr[i+1]){
        count++;
    }
    else{
        if(max<count)
        {
        max=count;
        }
    count=0;
    }
if(max<count)
        {
        max=count;
        }
}
printf("%d",max+1);
return 0;
}
