#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int j;
        char str[101];
        scanf("%s", str);
        int n = strlen(str);
        char str1[n / 2 + 1], str2[n / 2 + 1];
        if (n % 2 != 0) {
            printf("NO\n");
        } else {
            strncpy(str1, str, n / 2);
            str1[n / 2] = '\0';

            for (int i = n / 2, j = 0; i < n; i++, j++) {
                str2[j] = str[i];
            }
            str2[n / 2] = '\0'; 

            if (strcmp(str1, str2) == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
