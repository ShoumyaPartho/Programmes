#include<stdio.h>

int sum(int n){
    if (n==1) return 1;
    return n+sum(n-1);
}

int main(){
    int n,res;
    printf("Please enter the number: ");
    scanf("%d",&n);
    res=sum(n);
    printf("Sum is: %d\n",res);
    return 0;

}
