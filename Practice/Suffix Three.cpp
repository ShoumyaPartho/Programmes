#include<cstdio>
#include<cstring>

int main(){
    int t;char s[1010];
    scanf("%d",&t);
    getchar();

    while(t--){
        scanf("%s",s);
        int l=strlen(s);

        if(s[l-1]=='o') printf("FILIPINO\n");
        else if(s[l-1]=='u') printf("JAPANESE\n");
        else printf("KOREAN\n");
    }
    return 0;
}
