#include<stdio.h>

typedef struct {
    int id;
    char name[50];
}student;

int main(){

    student std;
    scanf("%d %[^\n]s",&std.id,std.name);
    printf("%d\n%s",std.id,std.name);
    return 0;
}
