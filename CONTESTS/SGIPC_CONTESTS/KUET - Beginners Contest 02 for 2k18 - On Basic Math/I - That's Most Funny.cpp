#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int t,count1,count2,re,temp1,temp2,n;
    cin>>t;
    while(t--) {
        cin>>n;
        temp1=temp2=n;
        count1=0;
        while(temp1!=0) {
            if(temp1%2==1) {
                count1++;
                temp1/=2;
            }
            else if(temp1%2==0) temp1/=2;
        }
        count2=0;
        while(temp2!=0) {
            re=temp2%10;
            switch (re){
                case 0:
                    count2+=0;
                    break;
                case 1:
                    count2+=1;
                    break;
                case 2:
                    count2+=1;
                    break;
                case 3:
                    count2+=2;
                    break;
                case 4:
                    count2+=1;
                    break;
                case 5:
                    count2+=2;
                    break;
                case 6:
                    count2+=2;
                    break;
                case 7:
                    count2+=3;
                    break;
                case 8:
                    count2+=1;
                    break;
                case 9:
                    count2+=2;
                    break;
            }
            temp2/=10;
        }
        printf("%d %d\n",count1,count2);
    }
    return 0;
}
