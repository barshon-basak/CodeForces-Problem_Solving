#include<stdio.h>
int main(){
int stren,x,y,n;
int flag=1;

scanf("%d",&stren);
scanf("%d",&n);
int arr1[n];
int arr2[n];
for(int z=0; z<n ; z++){
    scanf("%d",&arr1[z]);
    scanf("%d",&arr2[z]);
    }

 for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp1 = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp1;

                int temp2 = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp2;
            }
        }
    }

 for(int z=0; z<n ; z++){
    if(stren<=arr1[z]){
            flag=0;
            printf("NO");
            break;

    }
    else {
            stren += arr2[z];
            }
}

if(flag==1){
printf("YES");
}
return 0;
}
