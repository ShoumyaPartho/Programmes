#include<cstdio>

int main(){
    int q,a,b;
    scanf("%d",&q);

    while(q--){
        scanf("%d %d",&a,&b);

        if(!(a%b)) printf("0\n");
        else printf("%d\n",b-(a%b));
    }

    return 0;
}
