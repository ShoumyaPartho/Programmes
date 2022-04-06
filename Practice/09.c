#include<stdio.h>
#include<math.h>

int main(){
    int tc,n,temp;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        temp=sqrt(n);
        if(temp*temp==n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
