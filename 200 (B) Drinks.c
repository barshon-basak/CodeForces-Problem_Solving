#include<stdio.h>
#include<math.h>>
int main(){
int n;
float ans, sum=0.0;
scanf("%d",&n);
int Arr[n];
for(int i=0; i<n; i++){
    scanf("%d",&Arr[i]);
    sum += Arr[i];
}

ans= sum/n;

printf("%f\n",ans);
return 0;
}
