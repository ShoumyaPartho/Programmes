#include <stdio.h>

int main() {

    int t, n, s;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        s = ((((((n * 567) / 9) + 7492) * 235) / 47) - 498);
        s /= 10;
        s %= 10;

        if (s < 0) printf("%d\n", s + (s * -2));
        else    printf("%d\n", s);
    }
    return 0;
}
