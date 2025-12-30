#include <iostream>
#include <string>
#include <vector>

using namespace std;

int operations(string s){
	int counto = 0;
	if (s[0] == 'u') counto++;
	if (s[s.length()-1] == 'u') counto++;
	for (int i = 1; i < s.length()-2; i++){
		if (s[i] == 'u' && s[i+1] == 'u'){
			counto++;
			s[i+1] = 's';
		}
	}
	return counto;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<string>q;
	string temp;
	for (int i = 0; i < n; i++){
		cin >> temp;
		q.push_back(temp);
	}
	for (int i = 0; i < n; i++){
		cout << operations(q[i]) << '\n';
	}
	return 0;
}
