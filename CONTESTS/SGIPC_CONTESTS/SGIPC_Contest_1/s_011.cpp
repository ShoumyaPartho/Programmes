#include<bits/stdc++.h>

using namespace std;

int main() {

    int t,tt,i,x,j,sum;
    char a[]="donate",b[]="report",c[7],d[7];

    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&tt);
        sum=0;

        while(tt--) {
            //sum=0;
            gets(c);
            if(c[0]=='d' && c[1]=='o') {
                scanf("%d\n",x);
                sum+=x;
                }
            else if(c[0]=='r' && c[1]=='e') printf("Case %d:\n%d\n",i,sum);
        }
    }
    return 0;
}
