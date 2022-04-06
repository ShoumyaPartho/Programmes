#include<stdio.h>

void sort(int ara[],int n) {
    int i,j,temp;
    for(i=0;i<n-1;i++) {
        temp=0;
        for(j=i+1;j<n;j++) {
            if(ara[i]<ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
}

int main() {
    int n,m,i,j,s=0,temp=1;
    scanf("%d %d",&n,&m);
    int ara[m];
    for(i=0;i<m;i++) scanf("%d",&ara[i]);

    sort(ara,m);

    for(i=0;i+n-1<m;i++){
        if(temp) {
            s=ara[i]-ara[i+n-1];
            temp=0;
        }
        else{
            if((ara[i]-ara[i+n-1])<s) s=ara[i]-ara[i+n-1];
        }
    }
    printf("%d\n",s);

    return 0;
}
