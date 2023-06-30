#include <stdio.h>

int main() {
    int red,blue;
  scanf("%d",&red);
    scanf("%d",&blue);
if(red>blue){
    printf("%d %d",blue,(red-blue)/2);
}
else{
     printf("%d %d",red,(blue-red)/2);
}
    return 0;
}
