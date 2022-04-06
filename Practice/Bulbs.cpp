#include<cstdio>

int main(){
    int n,m,xi,temp;
    scanf("%d %d",&n,&m);
    bool bulbs[m+1]={false},check=true;

    while(n--){
        scanf("%d",&xi);
        while(xi--){
            scanf("%d",&temp);
            bulbs[temp]=true;
        }
    }
    for(int i=1;i<=m;i++){
        if(bulbs[i]==false){
            check=false;
            break;
        }
    }
    if(check) printf("YES\n");
    else printf("NO\n");

    return 0;
}
