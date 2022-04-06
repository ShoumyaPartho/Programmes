#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main(){
    char name1[30],name2[30];

    while(scanf("%[^\n]s",name1)!=EOF){
        getchar();
        scanf("%[^\n]",name2);
        getchar();

        int val1=0,val2=0,l1,l2;
        l1=strlen(name1),l2=strlen(name2);
        for(int i=0;i<l1;i++){
            if(name1[i]>='a' && name1[i]<='z') val1+=name1[i]-96;
            else if(name1[i]>='A' && name1[i]<='Z') val1+=name1[i]-64;
        }
        for(int i=0;i<l2;i++){
            if(name2[i]>='a' && name2[i]<='z') val2+=name2[i]-96;
            else if(name2[i]>='A' && name2[i]<='Z') val2+=name2[i]-64;
        }

        while(val1>9){
            int temp=0;
            while(val1){
                temp+=(val1%10);
                val1/=10;
            }
            val1=temp;
        }
        while(val2>9){
            int temp=0;
            while(val2){
                temp+=(val2%10);
                val2/=10;
            }
            val2=temp;
        }

        float rat;
        if(val1>val2) rat=(float)val2/val1;
        else rat=(float)val1/val2;

        printf("%0.2f %\n",rat*100);
    }
    return 0;
}
