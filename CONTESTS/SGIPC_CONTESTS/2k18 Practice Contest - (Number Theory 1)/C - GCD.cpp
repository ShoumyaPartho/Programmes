#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n,g;
    while(scanf("%d",&n) && n!=0){
        g=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++) g+=__gcd(i,j);
        }
        printf("%d\n",g);
    }

}
