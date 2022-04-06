#include<cstdio>

int main(){
    int t,a,b;
    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&a,&b);
        if(a==b) printf("0\n");
        else if(a<b){
            if((b-a)%2) printf("1\n");
            else printf("2\n");
        }
        else if(a>b){
            if((a-b)%2) printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
