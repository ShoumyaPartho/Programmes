#include<stdio.h>

int main() {

    int i,j,ara1[5][5],ara2[5][5],x,y,temp;
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) scanf("%d",&ara1[i][j]);
    }
    for(i=0,j=0;i<4,j<4;i++,j++) {
        for(x=i,y=j;y<5;y++) {
            temp=ara1[x][y];
            ara1[x][y]=ara1[y][x];
            ara1[y][x]=temp;
        }
    }
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            printf("%d ",ara1[i][j]);
        }
        printf("\n");
    }
}
