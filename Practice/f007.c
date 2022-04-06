#include<stdio.h>

int main() {
    char c1='A',c2='B', c3='C',*p1=&c1,*p2=&c2,*p3=&c3;
    printf("Value of %c , %c and %c is: %p , %p , %p\n",c1,c2,c3,p1,p2,p3);
    return 0;
}
