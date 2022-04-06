#include<cstdio>
#include<cstdlib>

int main(){
    int n,mx=0,res=0;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>mx) mx=ara[i];
    }
    for(int i=0;i<n;i++) res+=abs(mx-ara[i]);
    printf("%d\n",res);

    return 0;
}
