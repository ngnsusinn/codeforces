#include<iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a, b, c;
	cin >> a >> b >> c;
	map<int, int>x, ans;
	for (int i = 0; i < c.length(); i++){
		ans[c[i]]++;
	}
	for (int i = 0; i < a.length(); i++){
		x[a[i]]++;
	}
	for (int i = 0; i < b.length(); i++){
		x[b[i]]++;
	}
	if (ans == x) cout << "YES";
	else cout << "NO";
	return 0;
}
