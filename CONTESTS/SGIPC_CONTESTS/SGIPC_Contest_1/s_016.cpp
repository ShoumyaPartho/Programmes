#include <bits//stdc++.h>
using namespace std;

int main() {

    int t,mx,my,x,y;

    while (1) {
        scanf("%d",&t);

        if(t==0) {
            break;
        }
        else {
            scanf("%d %d",&mx,&my);
            while(t--) {
                scanf("%d %d",&x,&y);
                if(x==mx || y==my) printf("divisa\n");
                else if(x<mx) {
                    if(y>my) printf("NO\n");
                    else if (y<my) printf("SO\n");
                }
                else if(x>mx) {
                    if(y>my) printf("NE\n");
                    else if(y<my) printf("SE\n");
                }
            }
        }
    }
    return 0;
}
