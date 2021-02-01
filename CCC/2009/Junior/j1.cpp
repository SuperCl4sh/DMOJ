#include <cstdio>

using namespace std;
 int main() {
    int a,tot=91;
    for (int i=0;i<3;i++) {
        scanf("%i",&a);
        if (i==0 || i==2) {
            tot+=a;
        }
        else {
            tot+=3*a;
        }
 }
 printf("The 1-3-sum is %i",tot);

    return 0;
 }
