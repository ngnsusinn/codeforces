#include<iostream>
#include <string>
using namespace std;

bool ans(string s){
	string res = "yes";
	for (int i = 0; i < 3; i++){
		if (s[i] != res[i] && s[i]+32 != res[i]) return false; 
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	while (n--){
		string s;
		cin >> s;
		if (ans(s)) cout << "YES";
		else cout << "NO";
		cout << '\n';
	}
	return 0;
}
