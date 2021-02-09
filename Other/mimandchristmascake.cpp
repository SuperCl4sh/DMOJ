#include <cstdio>
typedef long long ll;

using namespace std;
bool sieve[100005];
 int main() {
    //ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int j;
    sieve[1]=1,sieve[0]=1;
    for (int i=2;i<=317;i++) {
        if (!sieve[i]) {
            j=2*i;
            while (j<=100100) {
                sieve[j]=1;
                j+=i;

            }
        }
    }
    int n,g,tot=0;
    scanf("%i",&n);
    while(n--) {
        scanf("%i",&g);
        if (!sieve[g])tot++;
    }
    printf("%i\n",tot);
    return 0;
 }
