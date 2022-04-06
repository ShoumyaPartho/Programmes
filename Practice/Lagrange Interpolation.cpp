#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int dataPoint,orderOfPoly;
    printf("\t\tINPUT\n\n\nEnter number of data points: ");
    cin>>dataPoint;
    double x[dataPoint],f[dataPoint],l[dataPoint],X,ans = 0.0;
    for(int i=0;i<dataPoint;i++){
        printf("Enter X%d: ",i);
        cin>>x[i];
    }
    for(int i=0;i<dataPoint;i++){
        printf("Enter F%d: ",i);
        cin>>f[i];
    }
    printf("\n\nEnter Desired Point: ");
    cin>>X;
    printf("Enter desire degree of Polynomial: ");
    cin>>orderOfPoly;
    for(int i=0;i<=orderOfPoly;i++){
        double temp1=1.0,temp2=1.0;
        for(int j=0;j<=orderOfPoly;j++){
            if(i==j) continue;
            temp1*=(X-x[j]);
        }
        for(int j=0;j<=orderOfPoly;j++){
            if(i==j) continue;
            temp2*=(x[i]-x[j]);
        }
        l[i] = temp1/temp2;
    }
    printf("\n\n\n\t\tOUTPUT\n\n\n");
    for(int i=0;i<=orderOfPoly;i++){
        printf("L%d: %lf\n",i,l[i]);
    }
    printf("\n\n\n");
    for(int i=0;i<=orderOfPoly;i++){
        ans+=(f[i]*l[i]);
        printf("F%d x L%d: %lf\n",i,i,l[i]*f[i]);
    }
    printf("Order of Polynomial: %d\t\t p(%lf): %lf\n\n",orderOfPoly,X,ans);
    return 0;
}
