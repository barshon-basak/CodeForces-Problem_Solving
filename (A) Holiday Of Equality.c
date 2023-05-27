#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int Arr[100];
    for(int i=0; i<n ; i++){
    scanf("%d",&Arr[i]);
    }
    
    int max = Arr[0];
    for(int i=0; i<n ; i++){
    if (Arr[i] > max) 
    {
    max=Arr[i];
    }
    }
    for(int i=0; i<n ; i++){
    sum= sum+(max-Arr[i]);
    }
    
    printf("%d",sum);
    
    return 0;
    }
    
