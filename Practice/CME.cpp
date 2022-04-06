#include<cstdio>

int main(){
    int q,n;
    scanf("%d",&q);

    while(q--){
        scanf("%d",&n);
        if(n==2) printf("2\n");
        else printf("%d\n",n%2);
    }
    return 0;
}
