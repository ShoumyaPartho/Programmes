#include<cstdio>

int main(){
    int n,s2f=0,f2s=0;
    scanf("%d",&n);
    getchar();

    char str[n+10];
    scanf("%s",str);

    for(int i=1;i<n;i++){
        if(str[i]!=str[i-1]){
            if(str[i-1]=='S') s2f++;
            else f2s++;
        }
    }
    if(s2f>f2s) printf("YES\n");
    else printf("NO\n");

    return 0;
}
