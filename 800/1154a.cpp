#include<iostream>

#define inf 1e8
#define ll long long
#define ii pair<int, int>
#define FOR(i, a, b) for(int i = a; i <r b; i++)

int max(int a, int b){
	if (a > b) return a;
	return b;
}

int fmax(int a[]){
	int m = -1;
	FOR(i, 0, 4) if (a[i] > m) m = a[i];
	return m;
}

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a[4];
	FOR(i, 0, 4) cin >> a[i];
	int mx = fmax(a);
	FOR(i, 0, 4){
		if (mx - a[i] != 0) cout << mx-a[i] << " ";
	}
	return 0;
}
