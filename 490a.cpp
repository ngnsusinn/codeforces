#include<bits/stdc++.h>
using namespace std;

#define inf 1e8
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int INF = 1e9;
const ld EPS = 1e-9;
const ll MOD = 1e9+7;

#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) FOR(i, 0, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define RESET(a, b) memset(a, b, sizeof(a))
#define ALL(v) v.begin(), v.end()
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define WS(n) while(n--)
#define edl '\n'

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	map<int, vi>q;
	stack<int> a1, a2, a3;
	FOR(i, 1, n){
		int t;
		cin >> t;
		if (t == 1) a1.push(i);
		else if (t == 2) a2.push(i);
		else a3.push(i);
	}
	if (SIZE(a1) == 0 || SIZE(a2) == 0 || SIZE(a3) == 0) cout << 0;
	else {
		cout << min(min(SIZE(a1), SIZE(a2)), SIZE(a3)) << edl;
		while(SIZE(a1) && SIZE(a2) && SIZE(a3)){
			cout << a1.top() << " " << a2.top() << " " << a3.top() << edl;
			a1.pop();
			a2.pop();
			a3.pop();
		}
	}
	return 0;
}
