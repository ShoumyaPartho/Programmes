#include<cstdio>
#include<cstring>

int main(){
    char hand[4],table[20];
    scanf("%s",hand);
    getchar();
    scanf("%[^\n]s",table);
    bool check=false;

    for(int i=0;i<15;i++){
        if(table[i]==hand[0] || table[i]==hand[1]){
            check=true;
            break;
        }
    }

    if(check) printf("YES\n");
    else printf("NO\n");
}
