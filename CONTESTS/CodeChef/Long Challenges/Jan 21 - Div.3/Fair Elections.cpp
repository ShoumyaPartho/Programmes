#include<iostream>
#include<algorithm>
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

  int tc,n,m,sumJohn,sumJack,i,j,cnt,temp;

  cin>>tc;

  while(tc--){
    cin>>n>>m;
    int johnVotes[n],jackVotes[m];
    sumJohn=0,sumJack=0,cnt=0;

    for(i=0;i<n;i++){
      cin>>johnVotes[i];
      sumJohn+=johnVotes[i];
    }
    for(i=0;i<m;i++) {
      cin>>jackVotes[i];
      sumJack+=jackVotes[i];
    }

    sort(johnVotes,johnVotes+n);
    sort(jackVotes,jackVotes+m);

    if(sumJohn>sumJack) cout<<cnt<<"\n";
    else{
      i=0,j=m-1;

      while((i<n) && (j>=0) && sumJohn<=sumJack){
        temp=johnVotes[i];
        sumJohn=sumJohn-johnVotes[i]+jackVotes[j];
        sumJack=sumJack-jackVotes[j]+temp;
        i++,j--,cnt++;
      }

      if(sumJohn<=sumJack) cout<<-1;
      else cout<<cnt;
      cout<<"\n";
    }
  }

  return 0;
}
