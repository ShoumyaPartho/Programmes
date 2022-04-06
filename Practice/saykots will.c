#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number of items: ");
    scanf("%d",&n);

    int ara1[n],ara2[n+1],highest=0;
    for(int i=1;i<=n;i++) ara2[i]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ara1[i]);
        ara2[ara1[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(ara2[i]>highest) highest=ara2[i];
    }
    for(int i=1;i<=n;i++){
        if(ara2[i]==highest) printf("%d ",i);
    }
    return 0;
}
