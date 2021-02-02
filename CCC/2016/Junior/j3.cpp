#include <bits/stdc++.h>
using namespace std;
int ans=1;
void solve(string s) {
    string a,b;
int right,k,len;
ans=1;
for (int i=0;i<s.length();i++) {
        a=s[i];
    for (int j=i+1;j<=s.length();++j) {
            a+=s[j];
            len = a.length();
            k=0;
            right=len-1;
            while (k<=right) {
                if (a[k]==a[right]){}
                else{break;}
                if (k+1>=right) {
                    ans=max(ans,len);
                }
                k++;
                right--;
            }
    }
}
return;
}
int main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
string g;
cin >> g;
solve(g);
cout << ans << endl;
return 0;
}
