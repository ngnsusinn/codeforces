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
	int t;
	cin >> t;
	WS(t){
		int n;
		cin >> n;
		if ((n/2) % 2 == 1) cout << "NO" << edl;
		else {
			cout << "YES" << edl;
			queue<int>q;
			for(int i = 2; i <= 2+(n/2-1)*2; i+=2){
				cout << i << " ";
				q.push(i);
			}
			int cnt = 0;
			while(q.size() > 1){
				cout << q.front() - 1 << " ";
				q.pop();
				cnt++;
			}
			cout << q.front() + cnt << edl;
		}
	}
	return 0;
}
