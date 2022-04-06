#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc,t;
    double num[3],d1,d2,r1,r2;
    scanf("%d",&tc);
    for(t=1;t<=tc;t++){
        scanf("%lf %lf %lf",&num[0],&num[1],&num[2]);
        printf("Case %d: ",t);
        sort(num,num+3);
        d1=num[1]-num[0];
        d2=num[2]-num[1];
        r1=num[1]/num[0];
        r2=num[2]/num[1];

        if(d1==d2 & r1==r2) printf("Both\n");
        else if(d1==d2 & r1!=r2) printf("Arithmetic Progression\n");
        else if(d1!=d2 & r1==r2) printf("Geometric Progression\n");
        else printf("None\n");
    }
    return 0;
}
