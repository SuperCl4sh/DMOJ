#include <iostream>

typedef long long ll;
using namespace std;


 int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a,b;int tot=0;
    cin >> a >> b;

    int occur[26],occur2[26];
    for (int i=0;i<26;i++) {
        occur[i]=0,occur2[i]=0;
    }
    for (int i=0;i<a.length();i++) {
        occur[int(a[i])-65]++;
    }
    for (int j=0;j<b.length();j++) {
        occur2[int(b[j])-65]++;
    }
    for (int i=0;i<26;i++) {
        if (occur[i]>occur2[i]) {
            tot+=occur[i]-occur2[i];
        }
    }
    cout << tot << endl;
    return 0;
 }
