#include <stdio.h>
#include <string.h>

int main() {
    char borze[201];
    scanf("%s", borze);

    int length = strlen(borze);
    char str[201];
    int Index = 0;

    for (int i = 0; i < length; i++) {
        if (borze[i] == '.') {
            str[Index++] = '0';
        } 
        else if (borze[i] == '-')
        {
            if (borze[i + 1] == '.'){
                 str[Index++] = '1';
            i++;
            }
            
            else if ( borze[i + 1] == '-') {
            str[Index++] = '2';
            i++;
            } 
           
        } 
    }
    
    str[Index] = '\0';
    printf("%s\n", str);

    return 0;
}
