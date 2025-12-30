#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char>q;
	for (int i = 0; i < n; i++){
		if (s[i] < 'a') s[i] += 'a'-'A';
		q.insert(s[i]);
	}
	if (q.size() == ('z'-'a'+1)) cout << "YES";
	else cout << "NO";
 	return 0;
}
