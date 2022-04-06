#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std;

vector<int>v;
vector<pair <int,int> > pv;
#define MAX 20000008

int limit=sqrt(MAX*1.0)+1;
bool check[4473];
bool mark[4473];

void Sieve(){
    v.push_back(2);
    for(int i=3;i*i<=limit;i+=2){
        if(!check[i]){
            v.push_back(i);
            //cout<<i<<" ";
            for(int j=i*2;j<=limit;j+=i) check[j]=true;
        }
    }
    for (int i=sqrt(limit)+1;i<=limit;i++){
        if(!check[i]) {
            v.push_back(i);
            //cout<<i<<" ";
            break;
        }
    }
}

void SegmentedSieve(){
    int low,high,lolim;
    Sieve();

    low=limit;
    high=limit*2;

    while(low<MAX){
        if(high>MAX) high=MAX;

        for(int i=0;i<v.size();i++){
            lolim=(low/v[i])*v[i];
            if(lolim<low) lolim+=v[i];

            for(int j=lolim;j<high;j+=v[i]) mark[j-low]=true;
        }

        for(int i=low;i<high;i++){
            if(!check[i-low]) {
                v.push_back(i);
                //cout<<i<<" ";
            }
        }
        low+=limit;
        high+=limit;
    }
}

/*void primecheck(){
    bool mark[20000005];
    memset(mark,true,sizeof(mark));
    v.push_back(2);
    for(int i=3;i<=20000004;i+=2){
        if(mark[i]){
            v.push_back(i);
            cout<<i<<" ";
            for(int j=i*i;j<=sqrt(20000004*1.0)+2;j+=i) mark[j]=false;
        }
    }
    for(int i=0;i<v.size();i++){
        if((v[i+1]-v[i])==2) pv.push_back({v[i],v[i+1]});
    }
}*/

int main(){
    SegmentedSieve();
    //primecheck();
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("(%d, %d)\n",pv[n-1].first,pv[n-1].second);
    }
    return 0;
}
