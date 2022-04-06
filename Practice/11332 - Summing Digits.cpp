#include <stdio.h>

int od(int n) {

    if (n < 10)   return n;
    else {
        int s = 0;
        for (int i = 10;; i *= 10) {
            if (n != 0) {
                s += (n % 10);
                n /= 10;
            }
            else break;
        }
        return od(s);
    }
}
int main() {

    int n, s;

    while (scanf("%d", &n) && n != 0) {
        if (n < 10)    printf("%d\n", n);
        else {
            s = od(n);
            printf("%d\n", s);
        }
    }
}
