#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isSimply(string t){
	int county = 0;
	for (int i = 0; i < t.length(); i++){
		if (t[i] == 'Y') county++;
	}
	if (county > 1) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<string>q;
	string t;
	for (int i = 0; i < n; i++){
		cin >> t;
		q.push_back(t);
	}
	for (int i = 0; i < n; i++){
		if (isSimply(q[i])) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}
