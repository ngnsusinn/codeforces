#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int b[n];
	for (int i = 0; i < n; i++){
		b[a[i]-1] = i;
	}
	for (int i = 0; i < n; i++){
		cout << b[i]+1 << " ";
	}
	return 0;
}
