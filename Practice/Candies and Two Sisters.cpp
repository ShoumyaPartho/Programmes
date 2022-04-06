#include<cstdio>

int main(){
    int tc,n;
    scanf("%d",&tc);

    while(tc--){
        scanf("%d",&n);

        if(n==1) printf("0\n");
        else if(n%2) printf("%d\n",n/2);
        else printf("%d\n",(n/2)-1);
    }
    return 0;
}
