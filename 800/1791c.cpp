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

int solve(int n, string s){
	queue<int>q;
	stack<int>st;
	FORN(i, 0, n/2) q.push(s[i]);
	FORN(i, n/2, n) st.push(s[i]);
	while(!q.empty()){
		if (q.front() != st.top()){
			q.pop();
			st.pop();
		}
		else break;
	}
	return SIZE(q)*2 + (n % 2 == 1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	WS(t){
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << solve(n, s) << edl;
	}
	return 0;
}
