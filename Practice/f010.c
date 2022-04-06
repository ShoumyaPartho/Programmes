#include<stdio.h>
#include<string.h>

int main() {
    char a[]="I Love ",b[]="Bangladesh",c[100];
    strcat(a,b);
    printf("%s, Length: %d\n",a,strlen(a));

    return 0;
}
