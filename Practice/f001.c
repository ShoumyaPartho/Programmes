#include<stdio.h>

double sum(double x, double y) {
    double sum;
    sum=x+y;

    return sum;
}

int main() {

    double a,b,s;
    scanf("%lf %lf",&a,&b);

    s=sum(a,b);

    printf("The sum is: %0.2lf\n",s);

    return 0;
}
