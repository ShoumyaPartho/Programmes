#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    unsigned long long int n,digit=0,temp;
    double sum=0.0;
    cin>>n;
    temp=n;
    while(temp!=0){
        digit++;
        temp/=10;
    }
    if(digit==1) sum+=n*1.0;
    else if(digit>1) sum+=9*1.0;

    if(digit==2) sum+=((n-9)*2.0);
    else if(digit>2) sum+=90*2.0;

    if(digit==3) sum+=((n-99)*3.0);
    else if(digit>3) sum+=900*3.0;

    if(digit==4) sum+=((n-999)*4.0);
    else if(digit>4) sum+=9000*4.0;

    if(digit==5) sum+=((n-9999)*5.0);
    else if(digit>5) sum+=90000*5.0;

    if(digit==6) sum+=((n-99999)*6.0);
    else if(digit>6) sum+=900000*6.0;

    if(digit==7) sum+=((n-999999)*7.0);
    else if(digit>7) sum+=9000000*7.0;

    if(digit==8) sum+=((n-9999999)*8.0);
    else if(digit>8) sum+=90000000*8.0;

    if(digit==9) sum+=((n-99999999)*9.0);
    else if(digit>9) sum+=900000000*9.0;

    if(digit==10) sum+=((n-999999999)*10.0);

    printf("%.0f\n",sum);
    //cout<<sum<<endl;
    return 0;
}
