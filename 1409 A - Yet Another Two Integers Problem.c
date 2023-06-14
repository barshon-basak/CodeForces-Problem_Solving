#include <stdio.h>
#include <math.h>

int main() {
    int t;
    double ans, a, b, res;
    scanf("%d", &t);

    while (t--) {
        scanf("%lf", &a);
        scanf("%lf", &b);
        res = fabs(a - b);
        res = res / 10.0;
        ans = ceil(res);
        printf("%d\n", (int)ans);
    }

    return 0;
}
