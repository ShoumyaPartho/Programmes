#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main() {
    double n,r,root;
    while(scanf("%lf\n%lf",&r,&n)!=EOF) {
        //scanf("%lf",&n);
        root=pow(n,1.0/r);
        printf("%0.0lf\n",root);
    }

    return 0;
}
