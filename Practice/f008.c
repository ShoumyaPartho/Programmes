#include<stdio.h>

int main() {
    char c='A',*p,**q;
    p=&c;
    q=&p;

    **q='B';
    printf("Value of c is : %c\n",c);
    printf("Value of c is : %c\n",*p);
    printf("Value of c is : %c\n",**q);

    return 0;
}
