#include<stdio.h>
#include<string.h>

int main() {

    char s[1000],i,a,x;
    gets(s);

    for(i=0;i<strlen(s);i++) {
        if (i==0) a=0;
        if (s[i]==' ') {
            a=0;
            printf("\n");
            continue;
        }
        if(a==0) {
            if(s[i]>='a' && s[i]<='z') {
                s[i]='A'+s[i]-'a';
                a++;
            }
        }
        printf("%c",s[i]);
    }
    return 0;
}
