#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main() {
    int t,ax,ay,bx,by,cx,cy,dx,dy,area;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=cx-(bx-ax);
        dy=ay+(cy-by);
        area=(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)))/2;
        if(area<0) area/=-1;
        printf("Case %d: %d %d %d\n",i,dx,dy,area);
    }
    return 0;
}
