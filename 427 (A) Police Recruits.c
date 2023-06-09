#include<stdio.h>
#include<math.h>>
int main(){
int n;
scanf("%d",&n);
int Arr[n];
int unsolved=0;
int police=0;
for (int i = 0; i<n; i++){
    scanf("%d",&Arr[i]);
}
for (int i = 0; i<n; i++){
    if(Arr[i]<0){
        if(police==0)
            unsolved++;
        else {

            police--;
    }}
    if(Arr[i]>0){
        police= police+ Arr[i];
    }
}

printf("%d",unsolved);
return 0;
}
