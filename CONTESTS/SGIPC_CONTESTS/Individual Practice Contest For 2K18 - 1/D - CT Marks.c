#include<stdio.h>

void sort(int ara[],int n) {
    int i,j,temp;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(ara[i]>ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    //for(i=0;i<n;i++) printf("%d ",ara[i]);
}

int main() {
    int t,n,i,j,x,count,d;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        d=0;
        int ara[n];
        for(i=0;i<n;i++) scanf("%d",&ara[i]);
        sort(ara,n);
        for(j=0;j<n-1;j++) {
            count=1;
            for(x=j+1;x<n;x++){
                if(ara[x]-ara[j]<=1) count++;
                else {
                    if(d<count) d=count;
                    break;
                }
                if(x==n-1 && d<count) d=count;
            }
        }
        printf("%d\n",d);
    }
    return 0;
}
