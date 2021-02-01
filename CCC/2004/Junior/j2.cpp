#include <stdio.h>

using namespace std;
int main() {
int x,y;
scanf("%d%d",&x,&y);
while (x<=y) {
    printf("All positions change in year %i\n", x);
    x+=60;
}
return 0;
}
