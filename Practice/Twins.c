#include<stdio.h>

int sort(int ara[],int n) {
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
    return;
}

int main() {

    int n,i,count=1,sum=0,s=0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ara[i]);
    }
    sort(ara,n);
    for(i=0;i<n-1;i++) {
        sum+=ara[i];
    }
    s=ara[n-1];
    for(i=n-1;i>0;i--) {
        if(s>sum) break;
        else{
            count++;
            sum-=ara[i-1];
            s+=ara[i-1];
        }
    }
    printf("%d\n",count);

    return 0;
}
