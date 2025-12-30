#include <iostream>
#include <vector>

using namespace std;

bool isValid(int n, const vector<int>& lw, const vector<int>& up, int sf) {
    for (int i = 0; i < n; ++i) {
        if (lw[i] >= up[(i + sf) % n]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    long long cab = 0;
    for (int shift = 0; shift < n; ++shift) {
        if (isValid(n, a, b, shift)) {
            cab++;
        }
    }
    long long cbc = 0;
    for (int shift = 0; shift < n; ++shift) {
        if (isValid(n, b, c, shift)) {
            cbc++;
        }
    }
    long long ans = cab * cbc * n;
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}