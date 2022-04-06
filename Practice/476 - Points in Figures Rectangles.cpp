#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double rectangle[10][4],point[2];
    char c;
    int cnt=0,i=0;
    while(1){
        cin>>c;
        if(c=='*') break;
        else if(c=='r'){
            cin>>rectangle[i][0]>>rectangle[i][1]>>rectangle[i][2]>>rectangle[i][3];
            cnt++;
            i++;
        }
    }
    int pt=0;
    while(scanf("%lf %lf",&point[0],&point[1])){
        if(point[0]==9999.9 && point[1]==9999.9) break;
        pt++;
        int check=0;
        for(int i=0;i<cnt;i++) {
            if((point[0]>rectangle[i][0]) && (point[0]<rectangle[i][2]) && (point[1]<rectangle[i][1]) && (point[1]>rectangle[i][3])){
               printf("Point %d is contained in figure %d\n",pt,i+1);
               check=1;
            }
            if(i==cnt-1 && check==0) printf("Point %d is not contained in any figure\n",pt);
        }
    }
    return 0;
}
