#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
while(t--){
    int n,T=0,I=0,M=0,U=0,R=0,F=0;
    scanf("%d",&n);
char str[n+1];
scanf("%s",str);

for(int i=0 ; str[i] != '\0' ; i++){
    if(str[i] == 'T') T++;
    else if(str[i] == 'i') I++;
     else if(str[i] == 'm') M++;
      else if(str[i] == 'u') U++;
       else if(str[i] == 'r') R++;
       else F++;
}
   if(T ==1 && I ==1 && M == 1 && U ==1&& R==1 && F ==0) 
   printf("YES\n");
   else  printf("NO\n");
}

    return 0;
}
