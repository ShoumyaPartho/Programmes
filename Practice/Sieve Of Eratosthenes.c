#include<stdio.h>
#include<math.h>

int main() {
    int n,i,j,root;
    printf("Please Enter the number: ");
    scanf("%d",&n);
    int ara[n];
    for(i=0,j=2;i<n;i++,j++) {
        ara[i]=j;
    }
    root=ceil((double)sqrt(ara[n-1]));
    for(i=0;i<root;i++){
        if(!ara[i]) continue;
        j=2;
        while(ara[i]*j<=ara[n-1]){
            ara[(ara[i]*j)-2]=0;
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(ara[i]) printf("%d ",ara[i]);
    }
    return 0;
}
