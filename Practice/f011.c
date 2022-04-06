#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<16) goto school;
    else if(n>=16 && n<=18) goto college;
    else if(n>18) goto adult;
    school:
        printf("You are a school boy\n");
    college:
        printf("You are a college boy\n");
    adult:
        printf("You are an adult!!! You may go wherever you want!!!\n");

    return 0;
}
