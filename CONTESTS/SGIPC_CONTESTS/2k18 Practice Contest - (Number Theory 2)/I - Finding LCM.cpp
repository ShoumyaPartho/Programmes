#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> prime;
bool check[1000010];

void soe(){
    prime.push_back(2);
    int sqrtn=sqrt(1000010)+1;
    for(int i=3;i<1000010;i+=2){
        if(check[i]==false){
            prime.push_back(i);
            if(i<sqrtn){
                for(int j=i*i;j<=1000010;j+=i+i) check[j]=true;
            }
        }
    }
}

int main(){
    soe();
    long long int tc,t,a,b,c,l,cnt1,cnt2,cnt3,res;
    cin>>t;

    for(tc=1;tc<=t;tc++){
        cin>>a>>b>>l;

        cout<<"Case "<<tc<<": ";

        if(l%a!=0 || l%b!=0) cout<<"impossible"<<endl;
        else{
            res=1;
            for(int i=0;i<prime.size() && (l>1 || a>1 || b>1);i++){
                cnt1=cnt2=cnt3=0;
                while(a%prime[i]==0){
                    a/=prime[i];
                    cnt1++;
                }
                while(b%prime[i]==0){
                    b/=prime[i];
                    cnt2++;
                }
                while(l%prime[i]==0){
                    l/=prime[i];
                    cnt3++;
                }
                if(cnt3>max(cnt1,cnt2)){
                    for(int j=0;j<cnt3;j++) res*=prime[i];
                }
            }
            if(l>1) res*=l;
            cout<<res<<endl;
        }
    }
    return 0;
}
