#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define edl '\n'

inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}


inline string uppercase(string s)
{
    int n = SIZE(s);
    REP(i, n)
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}

inline string lowercase(string s)
{
    int n = SIZE(s);
    REP(i, n)
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}

void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}

void solve(){
	int n, k;
	cin >> n >> k;
	vi qa, qb;
	FOR(i, 0, n){
		int t;
		cin >> t;
		qa.pb(t);
	}
	FOR(i, 0, n){
		int t;
		cin >> t;
		qb.pb(t);
	}
	SORT(qa);
	sort(qb.begin(), qb.end(), greater<int>());
	FOR(i, 0, k){
		if (qa[i] <= qb[i]) swap(qa[i], qb[i]);
	}
	int sm = 0;
	FOR(i, 0, n) sm += qa[i];
	cout << sm << edl;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    TC(t){
    	solve();
    }
}