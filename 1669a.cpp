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
#define REP(i, n) FORN(i, 0, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define RESET(a, b) memset(a, b, sizeof(a))
#define ALL(v) v.begin(), v.end()
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))

using namespace std;

string div(int n){
	if (n >= 1900) return "Division 1";
	if (n >= 1600) return "Division 2";
	if (n >= 1400) return "Division 3";
	return "Division 4";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	REP(i, n){
		int temp;
		cin >> temp;
		cout << div(temp) << '\n';
	}	
	return 0;
}
