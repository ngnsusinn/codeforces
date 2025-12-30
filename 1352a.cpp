#include<iostream>
#include <vector>

using namespace std;

void ans(int q){
	int d = 10, cnt = 0;
	vector<int>v;
	while (q != 0){
		int mod = q % d;
		if (mod != 0){
			v.push_back(mod);
			q -= mod;
		}
		d *= 10;
	}
	cout << v.size() << '\n';
	for (auto x : v) cout << x << " ";
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int q;
		cin >> q;
		ans(q);
	}
	return 0;
}
