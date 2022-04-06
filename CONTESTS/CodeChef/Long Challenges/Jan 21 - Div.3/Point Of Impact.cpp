#include<iostream>
using namespace std;

void fastIO(){

  ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif // ONLINE_JUDGE

}

int main(){
  fastIO();

  int tc,n,k,x,y,temp;
  cin>>tc;

  while(tc--){
    cin>>n>>k>>x>>y;
    if(x==y) cout<<n<<" "<<n<<"\n";
    else{
      pair<int,int> point[5];
      if(x>y) temp=n-x;
      else temp=n-y;

      if(x>y){
        point[1]={x+temp,y+temp};
        point[2]={point[1].second,point[1].first};
        point[3]={0,point[2].second-point[2].first};
        point[4]={point[3].second,point[3].first};
      }
      else{
        point[1]={x+temp,y+temp};
        point[2]={point[1].second,point[1].first};
        point[3]={point[2].first-point[2].second,0};
        point[4]={point[3].second,point[3].first};
      }
      if(k%4) cout<<point[(k%4)].first<<" "<<point[(k%4)].second<<"\n";
      else cout<<point[(4)].first<<" "<<point[(4)].second<<"\n";
    }
  }

  return 0;
}
