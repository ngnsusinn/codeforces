#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, mina = 0, maxa = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] > a[maxa]) maxa = i;
		if (a[i] <= a[mina]) mina = i;
	}
	if (mina > maxa) cout << n-1-mina + maxa;
	else cout << maxa + n-mina-1 -1;
	return 0;
}
