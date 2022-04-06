#include<cstdio>

int main(){
    int n,res=0,cnt=0;
    scanf("%d",&n);

    for(int i=1;;i++){
        if(res+(i*(i+1)/2)>n) break;
        res+=(i*(i+1)/2);
        cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}
