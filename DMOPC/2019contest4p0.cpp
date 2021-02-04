#include <bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)


 int main() {
    boost;
    string a,b;bool done=0;
    cin >>a>>b;
    for (int i=0;i<a.length();i++) {
        if (a[i]!=b[i]) {
            if (done) {
                cout << "LARRY IS DEAD!" << endl;
                return 0;
            }
            done=1;
        }
    }
    (done)?printf("LARRY IS SAVED!\n"):printf("LARRY IS DEAD!\n");
    return 0;
 }
