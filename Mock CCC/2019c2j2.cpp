#include <iostream>
using namespace std;

 int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s="";int ans=0,j=0;char a;
    for (int i=0;i<7;i++) {
        cin >> a;
        s+=a;
    }
    while (true) {
        j=s.find("JJ");
        if (j>s.length()) {
            break;
        }
        s.replace(s.begin()+j,s.begin()+j+2,"J");

    }
    for (int i=0;i<s.length();i++) {
        if (s[i]=='J') {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
 }
