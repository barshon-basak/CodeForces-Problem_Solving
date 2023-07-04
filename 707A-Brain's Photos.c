#include <stdio.h>

int main() {
    int row, col;
    scanf("%d%d", &row, &col);
    int flag = 0;
    char dig;
    int bb = row * col;
    for (int j = 1; j <= bb; j++) {
        scanf(" %c", &dig); 
        if (dig == 'C' || dig == 'M' || dig == 'Y') {
            flag = 1;
        }
    }
    
    if (flag == 0)
        printf("#Black&White\n");
    else
        printf("#Color\n");
    
    return 0;
}
