#include<bits/stdc++.h>

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

using namespace std;

void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}

int solve(int a, int b){
	if (a == b) return 0;
	if (a > b) swap(a, b);
	return (b-a)/10 + ((b-a)%10 != 0);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	WS(n){
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << '\n';
	}
	return 0;
}
