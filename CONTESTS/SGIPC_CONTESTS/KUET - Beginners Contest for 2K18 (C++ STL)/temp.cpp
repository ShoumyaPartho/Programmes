#include<iostream>
#include<map>

using namespace std;

int main(){
    int t,n,n1,n2;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        multimap<int,int> mp;
        while(n--){
            scanf("%d %d",&n1,&n2);
            //mp[n1]=n2;
            mp.insert({n1,n2});
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            printf("%d %d\n",it->first,it->second);
        }
    }
    return 0;
}
