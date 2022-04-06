#include<stdio.h>

int main(){
    int tc;
    unsigned int n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        if(n%2==0) printf("even\n");
        else printf("odd\n");
    }
    return 0;
}
