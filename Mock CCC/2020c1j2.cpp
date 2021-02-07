#include <cstdio>
#include <algorithm>
using namespace std;


 int main() {
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    printf("%i\n",c*max(a,b));
    return 0;
 }
