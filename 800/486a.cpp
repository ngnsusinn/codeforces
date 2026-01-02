#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int n;
	cin >> n;
	cout << (n/2)*(n/2+1) - ((n+1)/2)*((n+1)/2);
	return 0;
}
