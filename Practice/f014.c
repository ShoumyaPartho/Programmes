 #include<stdio.h>

 void recurse(int x) {
    if(x>5) return;
    printf("Count : %d\n",x);
    recurse(x+1);
    printf("Count : %d\n",x);
 }

 int main() {
    recurse(1);
    return 0;
 }
