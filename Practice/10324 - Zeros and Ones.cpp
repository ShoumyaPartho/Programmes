#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    char s[1000010];
    int Case=0,query;

    while(scanf("%s %d",s,&query) == 2){
        if(strcmp(s,"")==0) break;
        printf("Case %d:\n",++Case);
        int l=strlen(s);
        int mx,mn,change[l];
        change[0]=0;

        for(int i=1;i<l;i++){
            if(s[i]==s[i-1]) change[i]=change[i-1];
            else change[i]=i;
        }

        while(query--){
            scanf("%d %d",&mx,&mn);
            if(mn>mx) swap(mx,mn);
            if(change[mn]==change[mx]) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
