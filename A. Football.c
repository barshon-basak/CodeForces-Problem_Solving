#include <stdio.h>
#include <string.h>
int main (){
char n[100] ;
int i, a=0, b=0;
scanf ("%s", &n) ;
for( i=0;i<strlen (n) ; i++){
if( n[i] =='1' )
{
a++;
if (b>=7) 
{
break;
}
else b=0;
}
else if ( n[i] =='0' )
{
b++;
 
if (a>=7) {
break;}
else a=0;
}
}
if (a>=7 || b>=7)
printf ("YES\n");
else printf ("NO\n") ;
 
}
