#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[5000], arr1[5000], arr2[5000], arr3[5000], m = 0, k = 0, p = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 1) {
            arr1[m] = i + 1;
            m++;
        } else if (arr[i] == 2) {
            arr2[k] = i + 1;
            k++;
        } else {
            arr3[p] = i + 1;
            p++;
        }
    }

    int lowest = m;

    if (k < lowest) {
        lowest = k;
    }

    if (p < lowest) {
        lowest = p;
    }

    if (lowest == 0) {
        printf("0\n");
    } else {
        printf("%d\n", lowest);
        for (int j = 0; j < lowest; j++) {
            printf("%d %d %d\n", arr1[j], arr2[j], arr3[j]);
        }
    }

    return 0;
}
