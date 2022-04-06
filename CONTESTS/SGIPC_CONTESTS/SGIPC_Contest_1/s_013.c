#include<stdio.h>

int main() {

    int n,s=1;

    while(scanf("%d",&n)) {

        if(s) {
            if(n!=42) printf("%d\n",n);
            if(n==42) {
                s=0;
                continue;
            }
        }
        else if(!s) break;
    }
    return 0;
}
