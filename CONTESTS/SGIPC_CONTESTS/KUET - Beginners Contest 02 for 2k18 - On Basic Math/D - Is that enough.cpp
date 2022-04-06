#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        double r,res;
        cin>>r;
        res=(((r*2)*(r*2))-(acos(0.0)*2*r*r));
        printf("Case %d: %0.2f\n",i,res);
    }
    return 0;
}

