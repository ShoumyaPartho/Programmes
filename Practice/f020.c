#include<stdio.h>

void recurse(int n){
    if(n>5) return;
    printf("Count: %d\n",n);
    recurse(n+1);
    printf("Count: %d\n",n);
}
int main(){
    recurse(1);
    return 0;
}
