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

  int tc,c1,c2,c3,a1,a2,a3,a4,a5;
  cin>>tc;

  while(tc--){
    cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;

    if(a1> c1 || a2>c2 || a3>c3) cout<<"NO\n";
    else{
      c1-=a1,c2-=a2,c3-=a3;
      if(c1>=a4) {
        c1-=a4;
        a4=0;
      }
      else a4-=c1;
      if(c2>=a5) {
        c2-=a5;
        a5=0;
      }
      else a5-=c2;

      if(c3>=a4) {
        c3-=a4;
        a4=0;
      }
      else a4-=c3;
      if(c3>=a5) {
        c3-=a5;
        a5=0;
      }
      else a5-=c3;

      if(!a4 && !a5) cout<<"YES\n";
      else cout<<"NO\n";
    }
  }
  return 0;
}
