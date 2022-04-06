#include<cstdio>
using namespace std;

int main(){
    int n,M=0,C=0,m,c;
    scanf("%d",&n);

    while(n--){
        scanf("%d %d",&m,&c);
        if(m>c) M++;
        else if(m<c) C++;
    }
    if(M>C) printf("Mishka\n");
    else if(M<C) printf("Chris\n");
    else printf("Friendship is magic!^^\n");

    return 0;
}
