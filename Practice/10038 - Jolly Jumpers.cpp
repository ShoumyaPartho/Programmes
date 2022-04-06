#include<cstdio>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        bool check[n+1]={false};
        int ara[n];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
            if(!i) continue;
            int t=ara[i]-ara[i-1];
            if(t<0) t=-t;
            if(t<n) check[t]=true;
        }
        bool flag=true;
        for(int i=1;i<n;i++){
            if(!check[i]){
                flag=false;
                break;
            }
        }
        if(flag) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
