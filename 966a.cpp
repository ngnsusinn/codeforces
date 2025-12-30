#include<iostream>
#include<stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	stack<int>q;
	q.push(1);
	q.push(5);
	q.push(10);
	q.push(20);
	q.push(100);

	int bills = 0;
	while (!q.empty()){
		int temp = n / q.top();
		bills += temp;
		n -= temp*q.top();
		q.pop();
	}
	cout << bills;
	return 0;
}
