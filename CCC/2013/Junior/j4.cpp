#include <vector>
#include <iostream>
using namespace std;

int solve (vector<int> ar, int t, int counter) {
int total=-21421423;
if (ar.empty() || t==0) {
    return counter;
}

int i=0,g=0;
while (i<ar.size()) {
    if (ar[i]<=t) {
        g=ar[i];
        ar.erase(ar.begin()+i);
        //cout << solve(ar,t-g,counter+1) << endl;
        total=max(total,solve(ar,t-g,counter+1));
        i=0;
    }

    else {
        i++;
    }
    //cout << total << endl;
}

return total;

}
int main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int t,c;
cin >> t >> c;
vector <int> ar(c);
int lowest=2147293;
for (int i=0;i<c;i++) {
    cin >> ar[i];
    lowest=min(ar[i],lowest);
}
if (lowest>t) {
    cout << 0 << endl;
}
else {
cout << solve(ar,t,0) << endl;
}
return 0;
}
