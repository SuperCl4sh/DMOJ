#include <bits/stdc++.h>
using namespace std;
int main() {
    int total,k=1,a;
    cin >>a>> total;
    if (a!=0) {
        a--;
    }
    string days = "Sun Mon Tue Wed Thr Fri Sat";
    cout << days << endl;
    for (int j=0;j<a;++j) {
        cout << "    ";
    }
    a++;
    for (int i=1;i<=total;++i) {
            if (a%8==0) {
            cout << "\n";
            a=1;
            }
        if (i<10) {
            if (a==1 || k==1) {
                cout <<"  "<< i;
                k=0;
            }
            else {
                cout <<"   "<< i;
            }

        }
        else {
            if (a==1) {
               cout << " " << i;
            }
            else {
                cout << "  " << i;
            }

        }
        a++;
    }
    cout << endl;
    return 0;
}
