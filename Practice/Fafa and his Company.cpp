#include<cstdio>

int main(){
    int n,cnt=0,temp;
    scanf("%d",&n);

    for(int i=1;i<=(n/2);i++){
        temp=n-i;
        if(!(temp%i)) cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}
