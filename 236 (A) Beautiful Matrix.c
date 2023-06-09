#include<stdio.h>
#include<math.h>>
int main(){
int Arr[5][5];
int row,col,ans;
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
    scanf("%d",&Arr[i][j]);
    }
}

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
    if(Arr[i][j]==1){
        row=i+1;
        col=j+1;
    }
    }
}
ans= abs(3-row)+ abs(3-col);

printf("%d",ans);
return 0;
}
