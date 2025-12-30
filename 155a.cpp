#include<iostream>

#define inf 1e8

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, mx = -inf, mn = inf, cnt = 0;
	cin >> n;
	while (n--){
		int t;
		cin >> t;
		if (t > mx){
			mx = t;
			cnt++;
		}
		if (t < mn){
			mn = t;
			cnt++;
		}
	}
	cout << cnt-2;
	return 0;
}
