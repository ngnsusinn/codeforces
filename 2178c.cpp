#include <iostream>
#include <deque>
#include <vector>

using namespace std;

long long maxValue(deque<long long>& q, int n) {
    long long value = 0;
    while (q.size() > 1) {
        long long first = q[0];
        long long second = q[1];

        if (first >= -second) {
            value += first;
            q.pop_front();
        } else {
            value -= second;
            q.erase(q.begin() + 1);
        }
    }
    return value;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    if (!(cin >> t)) return 0;
    
    while(t--) {
        int n;
        cin >> n;
        deque<long long> q;
        for (int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            q.push_back(temp);
        }
        cout << maxValue(q, n) << '\n';
    }   
    return 0;
}