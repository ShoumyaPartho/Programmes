#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n) && n){
        int mat[n][n],sumcol[n]={0},sumrow[n]={0},rc=0,cc=0,r,c;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&mat[i][j]);
                sumrow[i]+=mat[i][j];
                sumcol[j]+=mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            if(sumrow[i]%2==1) {
                rc++;
                r=i+1;
            }
            if(sumcol[i]%2==1) {
                cc++;
                c=i+1;
            }
        }
        if(rc==0 && cc==0) cout<<"OK"<<endl;
        else if(rc>1 || cc>1) cout<<"Corrupt"<<endl;
        else if(rc==1 && cc==1) printf("Change bit (%d,%d)\n",r,c);
    }

    return 0;
}
