#include<stdio.h>
#include<string.h>
int main()
{
  char str[1001];
  scanf("%s",str);
  str[0]=towupper(str[0]);
  puts(str);

  return 0;
}
