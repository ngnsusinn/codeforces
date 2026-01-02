#include<iostream>
#include<cstring>

using namespace std;

void in(int level[], int n){
	for (int i = 1; i <= n; i++){
		int temp;
		cin >> temp;
		level[temp] = 1; 
	}
}

bool isPass(int level[], int n){
	for (int i = 1; i <= n; i++){
		if (level[i] == 0) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int level[n+1];
	fill(level, level+n+1, 0);
	int p, q;
	cin >> p;
	in(level, p);
	cin >> q;
	in(level, q);
	if (isPass(level, n)) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	return 0;
}
