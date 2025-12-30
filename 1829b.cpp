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

void solve(){
	int n, mx = 0;
	cin >> n;
	int a[n], f[n];
	RESET(f, 0);
	FORN(i, 0, n) cin >> a[i];
	if (a[0] == 1) f[0] = 0;
	else f[0] = 1;
	FORN(i, 1, n){
		if (a[i] == 0){
			if (a[i-1] == 0) f[i] = f[i-1] + 1;
			else f[i] = 1;
		}
	}
	FORN(i, 0, n) if (mx < f[i]) mx = f[i];
	cout << mx << edl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	WS(n){
		solve();
	}	
	return 0;
}
