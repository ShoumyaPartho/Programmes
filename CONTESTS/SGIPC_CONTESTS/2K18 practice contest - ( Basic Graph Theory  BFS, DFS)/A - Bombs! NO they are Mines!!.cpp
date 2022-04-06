#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

#define pii pair<int,int>
#define valid tx>=0 && tx<row && ty>=0 && ty<col

int row,col,crow,srow,scol,drow,dcol,grid[1000][1000],level[1000][1000];
int fx[]={1,-1,0,0},fy[]={0,0,1,-1},vis[1000][1000];

void bfs(){
    queue<pii> q;
    q.push({srow,scol});
    pii temp;
    int tx,ty;

    while(!q.empty()){
        temp=q.front();
        q.pop();
        tx=temp.first,ty=temp.second;

        for(int k=0;k<4;k++){
            tx=tx+fx[k];
            ty=ty+fy[k];

            if(valid && vis[tx][ty]==0 && grid[tx][ty]!=-1){
                q.push({tx,ty});
                level[tx][ty]=level[temp.first][temp.second]+1;
                vis[tx][ty]=1;
            }
        }
    }
    cout<<level[drow][dcol]<<endl;
}

int main(){
    int r,b,c;
    while(scanf("%d %d",&row,&col) && row && col){
        cin>>crow;

        for(int i=0;i<crow;i++){
            cin>>r>>b;
            for(int j=0;j<b;j++){
                cin>>c;
                grid[r-1][c-1]=-1;
            }
        }
        cin>>srow>>scol>>drow>>dcol;
        bfs();
    }
    return 0;
}
