#include<bits/stdc++.h>
using namespace std;int main(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);stack<int>q;int n;cin >> n;while (n != 0){q.push(n % 2);n /= 2;}while (!q.empty()){cout << q.top();q.pop();}return 0;
}
