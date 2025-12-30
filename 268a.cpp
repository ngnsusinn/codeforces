#include<iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>>q;
	for (int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		q.push_back(make_pair(a, b));
	}
	int cnt = 0;
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (q[i].first == q[j].second) cnt++;
			if (q[i].second == q[j].first) cnt++;
		}
	}
	cout << cnt;
	return 0;
}
