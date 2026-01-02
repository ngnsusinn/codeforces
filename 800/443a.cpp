#include<iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin, s);
	s.erase(s.begin() + 0);
	s.erase(s.begin() + s.length()-1);
	for (int i = 0; i < s.length(); i++){
		if (s[i] == ',') s[i] = ' ';
	}
	stringstream ss(s);
	char word;
	set<char>q;
	while (ss >> word){
		q.insert(word);
	}
	cout << q.size();
	return 0;
}
