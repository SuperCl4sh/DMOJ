#pragma GCC optimize "Ofast"
#include <cstdio>
typedef long long ll;
using namespace std;
 int main() {
    int a,b,tot=2;
    scanf("%i %i",&a,&b);
    while (true) {
        a^=b;b^=a;a^=b;
        b-=a;
        if (a<0 || b<0) {
            printf("%i\n",tot);
            return 0;
        }
        tot++;
    }
    return 0;
 }
