#include<cstdio>

int main(){
    int tc,h,m,res;
    scanf("%d",&tc);

    while(tc--){
        scanf("%d %d",&h,&m);
        res=((24-h)*60)-m;
        printf("%d\n",res);
    }

    return 0;
}
