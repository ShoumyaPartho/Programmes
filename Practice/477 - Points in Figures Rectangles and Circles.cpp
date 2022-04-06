#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    double figure[20][4],point[2],rad;
    char c,lst[20];
    int cnt=0,i=0;
    while(1){
        cin>>c;
        if(c=='*') break;
        else if(c=='r'){
            cin>>figure[i][0]>>figure[i][1]>>figure[i][2]>>figure[i][3];
            cnt++;
            lst[i]='r';
            i++;
        }
        else if(c=='c'){
            cin>>figure[i][0]>>figure[i][1]>>figure[i][2];
            cnt++;
            lst[i]='c';
            i++;
        }
    }
    int pt=0;
    while(scanf("%lf %lf",&point[0],&point[1])){
        if(point[0]==9999.9 && point[1]==9999.9) break;
        pt++;
        int check=0;
        for(i=0;i<cnt;i++) {
            if(lst[i]=='r'){
                if((point[0]>figure[i][0]) && (point[0]<figure[i][2]) && (point[1]<figure[i][1]) && (point[1]>figure[i][3])){
                    printf("Point %d is contained in figure %d\n",pt,i+1);
                    check=1;
                }
            }
            else if(lst[i]=='c'){
                rad=sqrt(((point[0]-figure[i][0])*(point[0]-figure[i][0]))+((point[1]-figure[i][1])*(point[1]-figure[i][1])));
                if(rad<figure[i][2]){
                    printf("Point %d is contained in figure %d\n",pt,i+1);
                    check=1;
                }
            }
            if(i==cnt-1 && check==0) printf("Point %d is not contained in any figure\n",pt);
        }
    }
    return 0;
}

