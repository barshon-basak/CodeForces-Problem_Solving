#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int c1=0;   int c2=0;	int c3=0;	int c4=0;
    int count=0;
	scanf("%d",&n);
	int Arr[n];
	for(int i=0; i<n; i++){
            scanf("%d",&Arr[i]);
        if(Arr[i]==1) c1++;
		if(Arr[i]==2) c2++;
		if(Arr[i]==3) c3++;
		if(Arr[i]==4) c4++;
	}
	count += c4;

	if(c3>=c1 ) {
            count+= c3;
            c1=0;
	}
	else {
		count+= c3;
		c1= c1-c3;
	}

if(c2 == 0){
    if(c1>=1 && c1<=4){
                count++;
	      }
        if(c1>4){
		    count += c1/4;
            count = count + c1%4;
		}

}
else if(c2 == 1){
         count++;
        c1= c1-2;
        if(c1>=1 && c1<=4){
                count++;
	      }
        else if(c1>4){
		    count += c1/4;
            count = count + c1%4;
        }
}

 else if (c2%2 == 1 ){
	    count= count+ c2/2;

          if(c1<=2){
            count++;
          }

          else{
            c1= c1-2;
        if(c1>=1 && c1<=4){
                count++;
	      }
        if(c1>4){
		    count += c1/4;
           count = count + c1%4;
		}}}
	else {
	    count= count+ c2/2;
        if(c1>=1 && c1<=4){
                count+= 1;
	      }
        if(c1>4){
		    count += c1/4;
            count = count + c1%4;
        }
	}

	printf("%d",count);

	return 0;
}
