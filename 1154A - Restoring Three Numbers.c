#include<stdio.h>

int main(){
int Arr[4],ind;
int sum1,a,b,c;
for(int i=0; i<4; i++){
    scanf("%d",&Arr[i]);
}
int max = Arr[0];
for(int i=0; i<4; i++){
   if(Arr[i]>= max)
   {max= Arr[i];
   ind= i;
}}
if(ind != 0 && ind != 1){
    sum1= Arr[0] + Arr[1];
    b= sum1-max;
    c= Arr[0]-b;
    a= max-(b+c);
}
else if(ind != 1 && ind != 2){
    sum1= Arr[1] + Arr[2];
    b= sum1-max;
    c= Arr[1]-b;
    a= max-(b+c);
}
else if(ind != 2 && ind != 3){
    sum1= Arr[2] + Arr[3];
    b= sum1-max;
    c= Arr[2]-b;
    a= max-(b+c);
}
else if(ind != 0 && ind != 2){
    sum1= Arr[0] + Arr[2];
    b= sum1-max;
    c= Arr[0]-b;
    a= max-(b+c);
}
else if(ind != 0 && ind != 3){
    sum1= Arr[0] + Arr[3];
    b= sum1-max;
    c= Arr[0]-b;
    a= max-(b+c);
}
printf("%d %d %d",a,b,c);
return 0;
}

