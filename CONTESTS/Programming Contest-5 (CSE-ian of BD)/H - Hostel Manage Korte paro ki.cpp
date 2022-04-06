#include<iostream>
using namespace std;

int main(){
    int n,meal_cost,total_cost,meal,fee;
    cin>>n>>meal_cost;
    for(int i=1;i<=n;i++){
        cin>>meal>>fee;
        total_cost=1300+(meal*meal_cost);
        if(fee<total_cost) cout<<"Member "<<i<<" will give "<<total_cost-fee<<" tk."<<endl;
        else if(fee==total_cost) cout<<"It's same !!"<<endl;
        else if(fee>total_cost) cout<<"Member "<<i<<" will get back "<<fee-total_cost<<" tk."<<endl;
    }
    return 0;
}
