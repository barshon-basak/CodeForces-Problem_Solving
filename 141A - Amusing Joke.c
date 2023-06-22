#include <stdio.h>
#include <string.h>

int areAllElementsSame(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return 0;

    int count[256] = {0};

    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
   char str1[201];
    char str2[201];
      char str3[201];
scanf("%s",str1);
scanf("%s",str2);
scanf("%s",str3);
strcat(str1,str2);

    if (areAllElementsSame(str1, str3))
        printf("YES");
    else
        printf("NO");

    return 0;
}
