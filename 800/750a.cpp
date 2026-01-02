#include<iostream>

#define inf 1e8
#define ll long long
#define ii pair<int, int>
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define for(i, a, b) for(int i = a; i >= 0; i--)

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	int i = 1;
	while (i*(i+1)/2*5 + k <= 4*60 && i <= n){
		i++;
	}
	cout << --i;
	return 0;
}
