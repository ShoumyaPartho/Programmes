#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    char *p,ara[80];
    scanf("%[^\n]s",ara);
    p=ara;
    int l=strlen(p);
    printf("%d\n",l);

    return 0;
}
