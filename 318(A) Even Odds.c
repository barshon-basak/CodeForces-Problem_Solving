#include <stdio.h>

int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);

    long long int mid = (n + 1) / 2;
    long long int num;;

    if (k <= mid) {
       num = 2 * k - 1;
    } else {
        num = 2 * (k - mid);
    }

    printf("%lld\n", num);

    return 0;
}
