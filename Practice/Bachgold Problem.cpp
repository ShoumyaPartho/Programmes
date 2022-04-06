#include<cstdio>

int main(){
    int n;
    scanf("%d",&n);

    if(n%2){
        printf("%d\n",n/2);
        for(int i=0;i<(n/2)-1;i++) printf("2 ");
        printf("3\n");
    }
    else{
        printf("%d\n",n/2);
        for(int i=1;i<=n/2;i++) {
            printf("2");
            if(i==(n/2)) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
