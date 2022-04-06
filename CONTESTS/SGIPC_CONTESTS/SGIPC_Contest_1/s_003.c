#include<stdio.h>

int main() {

    char word[1009];
    int i;

    scanf("%s",word);

    if(word[0]>=97 && word[0]<=122) word[0]=('A'+word[0]-'a');

    printf("%s\n",word);

    return 0;
}
