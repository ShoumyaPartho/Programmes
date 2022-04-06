#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<string,int> &a,const pair<string,int> &b){
    return (a.second>b.second);
}

int main(){
    int n,total,get_total,num,sum=0;
    cin>>n>>total;
    vector<pair<string,int> > v;
    vector<int>ara;
    bool check;
    string s;
    for(int i=0;i<n;i++){
        cin>>s>>num;
        v.push_back({s,num});
        ara.push_back(num);
    }
    for(int i=0;i<n;i++){
        if(ara[i]>total) {
            check=false;
            break;
        }
        else check=true;
        sum+=ara[i];
    }
    if(!check) cout<<"Invalid"<<endl;
    else if(check) {
        if (sum>total) {
            check=false;
            cout<<"Invalid"<<endl;
        }
    }
    if(check){
        sort(v.begin(),v.end(),sortbysec);
        for(int i=0;i<n;i++) cout<<v[i].first<<endl;
    }
    return 0;
}
