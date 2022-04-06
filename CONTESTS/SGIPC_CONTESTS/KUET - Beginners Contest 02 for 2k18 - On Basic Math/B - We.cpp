#include<stdio.h>
//using namespace std;

#define NUM 501

int a[NUM][NUM],b[NUM][NUM],c[NUM][NUM],i,j,n;


bool check(){
    long long cx[501]={0};

    for(i=0;i<n;i++){
        for(j=0;j<n;j++) cx[i]+=(j+1)*c[i][j];
    }

    long long bx[501]={0};
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) bx[i]+=(j+1)*b[i][j];
    }

    long long abx[501]={0};
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) abx[i]+=bx[j]*a[i][j];
    }

    for(i=0;i<n;i++){
        if(abx[i]!=cx[i]) return false;
    }
    return true;
}

int main(){
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for (j=0;j<n;j++) scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for (j=0;j<n;j++) scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++){
        for (j=0;j<n;j++) scanf("%d",&c[i][j]);
    }

    if(check()) printf("YES\n");
    else printf("NO\n");

    return 0;
}
