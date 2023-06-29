#include <stdio.h>
int main() {
    int n1,max,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>=n2){
        max=n1;
    }
    else max=n2;
    
    switch(max){
        case 1:
        printf("1/1");
        break;
         case 2:
        printf("5/6");
        break;
         case 3:
        printf("2/3");
        break;
         case 4:
        printf("1/2");
        break;
         case 5:
        printf("1/3");
        break;
         case 6:
        printf("1/6");
        break;
    }
 
    return 0;
}
