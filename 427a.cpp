#include<iostream>
#include <stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	stack<int>q;
	int cnt = 0;
	while (n--){
		int t;
		cin >> t;
		if (t > 0) q.push(t);
		else if (!q.empty()){
			q.top()--;
			if (q.top() == 0) q.pop();
		}
		else cnt++;
	}
	cout << cnt;
	return 0;
}
