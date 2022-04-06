#include<iostream>
using namespace std;

int main(){
    int t,tc=0;
    cin >>t;
    while(t--){
        int m,n,q,u,v,w,total=0,cnt,i;
        cin>>m>>n>>q;
        int x[m+1]={0},y[n+1]={0};

        for(int i=1;i<=q;i++){
            cin>>u>>v>>w;
            x[u]+=w;
            y[v]+=w;
            total+=w;
        }
        cnt=0;

        cout<<"Case "<<++tc<<": ";

        for(i=0;i<=(m+1) && (2*cnt)<total;i++) cnt+=x[i];
        cout<<i-1<<" ";

        cnt=0;

        for(i=0;i<=(n+1) && (2*cnt)<total;i++) cnt+=y[i];
        cout<<i-1<<endl;
    }
}
