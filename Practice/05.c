#include<stdio.h>

int main(){
    int tc,n,i,j;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++) printf("*");
            //if(i!=(n-1))
            printf("\n");
        }
        if(tc!=0) printf("\n");
    }
    return 0;
}
