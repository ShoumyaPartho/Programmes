#include<stdio.h>
#include<string.h>

int main() {

    char s1[105],s2[105];
    int i,j,l1,l2,c;
    scanf("%s %s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0,j=l2-1;i<l1;i++,j--) {
        if(s1[i]==s2[j]) c=1;
        else {
            c=0;
            break;
        }
    }
    if(c) printf("YES\n");
    else printf("NO\n");

    return 0;
}
