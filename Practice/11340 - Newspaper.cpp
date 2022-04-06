#include<iostream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;

int  main(){
    int N;
    cin>>N;

    while(N--){
        int K,M;
        map<char,double> value;
        double money=0.0;
        cin>>K;
        while(K--){
            double tv;
            char c;
            cin>>c>>tv;
            value[c]=tv;
        }
        cin>>M;
        cin.ignore();
        while(M--){
            string s;
            getline(cin,s);
            for(int i=0;i<s.size();i++){
                char c1=s[i];
                auto it=value.find(c1);
                if(it!=value.end())
                    money+=it->second;
            }

        }
        cout<<fixed<<setprecision(2)<<money/100.0<<"$"<<endl;
    }
    return 0;
}
