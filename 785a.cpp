#include<iostream>
#include<string>

using namespace std;

int face(string s){
	if (s == "Tetrahedron") return 4;
	if (s == "Cube") return 6;
	if (s == "Octahedron") return 8;
	if (s == "Dodecahedron") return 12;
	if (s == "Icosahedron") return 20;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, faces = 0;
	cin >> n;
	while (n--){
		string tem;
		cin >> tem;
		faces += face(tem);
	}
	cout << faces;
	return 0;
}
