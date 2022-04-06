#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n,mat=0,prog=0,pe=0;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]==1) prog++;
        else if(ara[i]==2) mat++;
        else pe++;
    }
    int res=min(prog,min(mat,pe));
    printf("%d\n",res);

    for(int i=0;i<res;i++){
        for(int j=0;j<n;j++){
            if(ara[j]==1){
                printf("%d ",j+1);
                ara[j]=0;
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(ara[j]==2){
                printf("%d ",j+1);
                ara[j]=0;
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(ara[j]==3){
                printf("%d\n",j+1);
                ara[j]=0;
                break;
            }
        }
    }
    return 0;
}
