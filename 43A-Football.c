#include <stdio.h>
#include <string.h>

struct string {
    char name[11];
};

int main() {
    int n, ow = 1, count = 1;
    scanf("%d", &n);
    
    struct string student[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", student[i].name);
    }

    char str1[11], str2[11];
    strcpy(str1, student[0].name);

    for (int i = 1; i < n; i++) {
        if (strcmp(str1, student[i].name) == 0) {
            count++;
        } else {
            if (ow == 2) {
                continue;
            } else {
                strcpy(str2, student[i].name);
                ow = 2;
            }
        }
    }

    if (count >= ((n + 1) / 2)) {
        printf("%s", str1);
    } else {
        printf("%s", str2);
    }
    return 0;
}
