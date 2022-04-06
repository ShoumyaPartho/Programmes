#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  //freopen("in.txt","r",stdin);

  int tc,g,i,n,q,head,tail;

  cin>>tc;

  while(tc--){
    cin>>g;

    while(g--){
      cin>>i>>n>>q;

      if(i==1){
        head=n/2;
        tail=n-head;
      }
      else if(i==2){
        tail=n/2;
        head=n-tail;
      }

      if(q==1) cout<<head<<endl;
      else cout<<tail<<endl;
    }
  }

  return 0;
}
