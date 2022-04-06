#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,a=1;
    while(scanf("%d",&n)==1){
        if (n==42) a=0;
        if(a) cout<<n<<endl;
    }
    return 0;
}
