#include <cstdio>
using namespace std;

 int main() {
    int a,b,c,d;
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if (a==8 || a==9) {
        if (d==8 || d==9) {
            if (b==c) {
                printf("ignore");
                return 0;
            }
        }
    }
    printf("answer");
    return 0;
 }
