#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

class Array{
public:
    string name;
    long long int B,D,CD;
    vector<long long int>lb,ub,C;

    void calc(){
        long long int c[D+1];
        c[0]=B;
        c[D]=CD;


        for(int i=D-1;i>0;i--){
            c[i]=c[i+1]*(ub[i+1]-lb[i+1]+1);
            //C.push_front(c[i]);
            C.insert(C.begin(),c[i]);
        }
        C.push_back(c[D]);
        //C.insert(C.end(),c[D]);
        //C.push_front(c[0]);
        C.insert(C.begin(),c[0]);

        for(int i=1;i<=D;i++) C[0]-=(C[i]*lb[i]);

    }
};

int main(){
    int N,R;
    cin>>N>>R;
    map<string,int> mp;
    vector<Array> ara;

    for(int i=0;i<N;i++){
        Array temp;
        cin>> temp.name;
        cin.ignore();
        //cout<<temp.name;
        cin>>temp.B>> temp.CD>> temp.D;
        //cout<<temp.B<<temp.CD<<temp.D;
        mp[temp.name]=i;
        temp.lb.push_back(0);
        temp.ub.push_back(0);

//        cout<<temp.lb[0];
//        cout<<temp.ub[0];

        for(int j=1;j<=temp.D;j++){
            int a,b;
            cin>>a>>b;
            temp.lb.push_back(a);
            temp.ub.push_back(b);
        }
        temp.calc();
        ara.push_back(temp);
    }
    for(int i=0;i<R;i++){
        Array temp;
        cin>>temp.name;
        long long int lim=ara[mp[temp.name]].D,res=ara[mp[temp.name]].C[0],t;
        vector<long long int>a;

        for(int j=1;j<=lim;j++){
            cin>>t;
            a.push_back(t);
            res+=(ara[mp[temp.name]].C[j]*t);
        }
        cout<<temp.name<<"["<<a[0];
        for(int k= 1;k<a.size();k++) cout<<", "<<a[k];
        cout<<"] = "<<res<<endl;
    }
    return 0;
}
