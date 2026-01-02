#include<iostream>
#include<string>

using namespace std;

void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, second;
	cin >> n >> second;
	string t;
	cin >> t;
	for (int i = 0; i < second; i++){
		for (int j = 0; j < n-1; j++){
			if (t[j] == 'B' && t[j+1] == 'G'){
				swap(t[j], t[j+1]);
				j++;
			}
		}
	}
	cout << t;
	return 0;
}
