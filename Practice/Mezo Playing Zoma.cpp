#include<cstdio>

int main(){
    int n,l=0,r=0;char c;
    scanf("%d",&n);
    getchar();
    while(n--){
        scanf("%c",&c);
        if(c=='L') l++;
        else if(c=='R') r++;
    }
    printf("%d\n",l+r+1);

    return 0;
}
