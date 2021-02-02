#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
using namespace std;

#define mp make_pair
#define pb push_back
#define pf push_front
#define PF pop_front
#define PB pop_back
#define P push
#define F first
#define S second
#define scann(speed){int s=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+ch-'0',ch=getchar();}speed=s*f;}
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
#define boost ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define make_tuple MT
#define PI 3.14159265
#define len(s) (int)s.length()
#define sz(s) (int)s.size()
#define sp(x) fixed << setprecision(x)
typedef long long ll;
typedef string str;
typedef pair<int,int> pii;
typedef pair<ll,ll>pll;
typedef pair<double,double>pdd;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ld,ld>pld;
typedef pair<str,str>pss;
typedef pair<long,long>pl;
char _;
const int MOD = 1000000007;
const ll mxN= (ll)(1e15);
vector<pss>ar;
vector<pair<pii,pss>>ans;
int n;str a,b;
vector<pair<str,int>>visited;
vector<vector<pair<pii,pss>>>s;
bool solve () {
	if (!ans.empty()) return 1;
	vector<pair<pii,pss>>move;
	move=s[s.size()-1];
	s.PB();
	str curr;
	if (move.size()>0) { 
	curr=move[move.size()-1].S.S;
	}
	else curr=a;
	if (move.size()==n) {
		if (curr.compare(b)==0) {ans=move;return 1;}
		return 0;
		
	}
	for (int i=0;i<visited.size();i++) {
		if (visited[i].F==curr&&visited[i].S==move.size()) return 0;
	}
	visited.pb(mp(curr,sz(move)));
	int start=0,ind=0;str g;
	g=curr;
       for (int i=0;i<3;i++) {
	       start=0;
	       while (true){
	       g=curr;
	       ind=g.find(ar[i].F,start);
	       if (ind==-1) break;
	       ind++;
	       start=ind;
	       g.replace(ind-1,len(ar[i].F),ar[i].S);
	       move.pb(mp(mp(i+1,ind),mp(curr,g)));
	       s.pb(move);
	       if (solve()) return 1;
	       move.PB();
	       
	       }
	       
       }
return 0;
}
int main() {
    boost;
    for (int i=0;i<3;i++) {
    	cin >> a >> b;
	ar.pb(mp(a,b));
    }
    cin >> n >> a >> b;
    vector<pair<pii,pss>>move;
    s.pb(move);
    bool temp = solve();
    for (int i=0;i<ans.size();i++) {
    	cout << ans[i].F.F << " " << ans[i].F.S <<" " << ans[i].S.S << "\n";
    }
    
    return 0;
//this code passes the test cases offered by Waterloo
}
