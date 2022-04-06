#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> prime;
bool check[100000010];

void soe(){
    prime.push_back(2);
    int sqrtn=sqrt(100000010)+1;
    for(int i=3;i<100000010;i+=2){
        if(check[i]==false){
            prime.push_back(i);
            if(i<sqrtn){
                for(int j=i*i;j<=100000010;j+=i+i) check[j]=true;
            }
        }
    }
}

long long int SOD(long long int n){
    long long int res=1,p,temp,t=n;
    for(int i=0;i<prime.size() && i*i<n;i++){
        //if(prime[i]>n) break;
        p=temp=1;
        while(n%prime[i]==0){
            n/=prime[i];
            p*=prime[i];
            temp+=p;
        }
        res*=temp;
    }
    if(n>1) res*=(n+1);
    //cout<<res-t<<endl;
    return res;
}

int main(){
    soe();
    long long int tc,n;
    cin>>tc;

    while(tc--){
        cin>>n;
        cout<<SOD(n)-n<<endl;
    }
}
