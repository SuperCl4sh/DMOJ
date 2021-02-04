#pragma GCC optimize "Ofast"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
 int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a,b,n,x,y,tot;
    cin >> n >> a >> b;
    tot=n;
    vector<ll>ar;
    for (int i=0;i<a;i++) {
        cin >> x;
        ar.push_back(x);
    }
    for (int j=0;j<b;j++) {
        cin >> y;
        for (int f=0;f<a;f++) {
            if (y==ar[f]) {
                tot--;
            }
        }
    }

    cout << tot << endl;

    return 0;
 }
