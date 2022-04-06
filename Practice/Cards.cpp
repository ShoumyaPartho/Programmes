#include<cstdio>

int main(){
    int n,one=0,zero=0; char c;
    scanf("%d",&n);
    getchar();

    while(n--){
        scanf("%c",&c);
        if(c=='z') zero++;
        else if(c=='n') one++;
    }
    if(one){
        for(int i=0;i<one;i++){
            printf("1");
            if(i<(one-1) || zero) printf(" ");
            else printf("\n");
        }
    }
    if(zero){
        for(int i=0;i<zero;i++){
            printf("0");
            if(i<(zero-1)) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}
