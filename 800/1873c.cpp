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

int getPoint(int i, int j){
	if ((i == 1 || j == 1) || (i == 10 || j == 10)) return 1;
	if ((i == 2 || j == 2) || (i == 9 || j == 9)) return 2;
	if ((i == 3 || j == 3) || (i == 8 || j == 8)) return 3;
	if ((i == 4 || j == 4) || (i == 7 || j == 7)) return 4;
	if ((i == 5 || j == 5) || (i == 6 || j == 6)) return 5;
	return 0;
}

int solve(char a[11][11]){
	int p = 0;
	FOR(i, 1, 10){
		FOR(j, 1, 10){
			if (a[i][j] == 'X') p += getPoint(i, j);
		}
	}
	return p;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	WS(t){
		char a[11][11];
		FOR(i, 1, 10){
			FOR(j, 1, 10) cin >> a[i][j];
		}
		cout << solve(a) << edl;
	}
	return 0;
}
