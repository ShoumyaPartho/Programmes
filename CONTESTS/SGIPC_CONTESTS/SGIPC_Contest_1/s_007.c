#include<stdio.h>

int main() {

    int mat[5][5];
    int i,j,k,l,a,b;

    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]) {
                k=i+1;
                l=j+1;
            }
        }
    }
    if(k<3) a=3-k;
    else if(k>=3) a=k-3;
    if(l<3) b=3-l;
    else if(l>=3) b=l-3;

    printf("%d\n",a+b);

    return 0;
}
