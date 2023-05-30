#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%d", &num);

    for(int k=1; k<=num ; k++) {
        char s[11];
        scanf("%s", s);

        char target[] = "codeforces";
        int count = 0;

        for (int i = 0; i < 10; i++) {
            if (s[i] != target[i]) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
