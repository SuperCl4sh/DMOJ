#include <cstdio>
using namespace std;
 int main() {
    int ar[4][4],tot=0,row;
    for (int i=0;i<4;i++) {
        tot=0;
        for (int j=0;j<4;j++) {
            scanf("%i",&ar[i][j]);
            tot+=ar[i][j];
        }
        if (i==0) {
            row=tot;
        }
        else {
            if (row!=tot) {
                printf("not magic\n");
                return 0;
            }
        }
    }
    tot=0;
    for (int i=0;i<4;i++) {
        tot=0;
        for (int j=0;j<4;j++) {
            tot+=ar[j][i];
        }
        if (tot!=row) {
            printf("not magic\n");
            return 0;
        }
    }
    printf("magic\n");

    return 0;
 }


