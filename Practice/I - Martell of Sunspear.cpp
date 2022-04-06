#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int tc,i,n,q,a,b,temp,num;
    string s,row="row",col="col",inc="inc",dec="dec",trans="transpose";
    cin>>tc;
    for(i=1;i<=tc;i++){
        cin>>n;
        int mat[n][n];
        for(int j=0;j<n;j++){
            cin>>num;
            for(int k=n-1;k>=0;k--) {
                //cin>>mat[j][k];
                temp=num%10;
                mat[j][k]=temp;
                num/=10;
            }
        }
        cin>>q;
        while(q--){
            cin>>s;
            if(s==row){
                cin>>a>>b;
                for(int x=0;x<n;x++) swap(mat[a-1][x],mat[b-1][x]);
            }
            else if(s==col){
                cin>>a>>b;
                for(int x=0;x<n;x++) swap(mat[x][a-1],mat[x][b-1]);
            }
            else if(s==inc){
                for(int x=0;x<n;x++) {
                    for(int y=0;y<n;y++) mat[x][y]=((mat[x][y]+1)%10);
                }
            }
            else if(s==dec){
                for(int x=0;x<n;x++) {
                    for(int y=0;y<n;y++) mat[x][y]=(((mat[x][y]-1)+10)%10);
                }
            }
            else if(s==trans){
                for(int x=0;x<n-1;x++){
                    for(int y=x+1;y<n;y++) swap(mat[x][y],mat[y][x]);
                }
            }
        }
        cout<<"Case #"<<i<<endl;
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++) cout<<mat[x][y];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
