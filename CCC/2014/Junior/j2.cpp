#include <cstdio>
using namespace std;

 int main() {
    int a,tot=0;char ar[15];
    scanf("%i %s",&a,&ar);
    for (int i=0;i<a;i++) {
        (ar[i]=='A')? tot++:tot--;
    }
    if (tot==0) {
        printf("Tie\n");
    }
    else if (tot>0) {
        printf("A\n");
    }
    else {
        printf("B\n");
    }
    return 0;
 }
