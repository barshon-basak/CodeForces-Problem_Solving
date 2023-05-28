#include <stdio.h>
#include <string.h>

int main() {
    char str[101], str2[202];
    scanf("%s", str);
    int len = strlen(str);
    int k = 0;
    for(int i = 0; i < len; i++) {
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + ('a' - 'A');
        if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y'))
         {  // continue;
        str2[k++] = '.';
        str2[k++] = ch;
    }}
    str2[k] = '\0';
    printf("%s\n", str2);
    return 0;
}
