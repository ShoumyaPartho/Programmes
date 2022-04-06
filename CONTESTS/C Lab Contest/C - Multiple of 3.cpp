#include<stdio.h>

int main(){
    int tc,n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);

        if(n%3) printf("%d is not a multiple of 3\n",n);
        else printf("%d is a multiple of 3\n",n);
    }
    return 0;
}
