#include<stdio.h>

int main() {
    FILE *file;
    file=fopen("file.txt","w");
    char output_file[100];
    gets(output_file);
    fputs(output_file,file);

    return 0;
}
