#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int>q;
	for (int i = 0; i < 3; i++){
		int t;
		cin >> t;
		q.push_back(t);
	}
	sort(q.begin(), q.end(), greater<int>());
	int cnt = 0;
	for (int i = 0; i < 2; i++){
		cnt += q[i] - q[i+1];
	}
	cout << cnt;
	return 0;
}
