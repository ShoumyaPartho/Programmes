#include <stdio.h>
#include <string.h>

int main() {

    int t;
    char s[100];

    scanf("%d", &t);
    gets(s);

    while (t--) {
        gets(s);

        if (strlen(s) == 5)
            printf("3\n");

        else if ((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e'))
            printf("1\n");

        else
            printf("2\n");
    }
    return 0;
}
