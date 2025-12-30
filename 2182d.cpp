#include <iostream>
#include <vector>

using namespace std;

const int M = 998244353;
const int MX = 60;

long long f[MX];
long long iv[MX];

long long pw(long long b, long long e) {
    long long r = 1;
    b %= M;
    while (e > 0) {
        if (e % 2 == 1) r = (r * b) % M;
        b = (b * b) % M;
        e /= 2;
    }
    return r;
}

long long mi(long long n) {
    return pw(n, M - 2);
}

void pc() {
    f[0] = 1;
    iv[0] = 1;
    for (int i = 1; i < MX; i++) {
        f[i] = (f[i - 1] * i) % M;
        iv[i] = mi(f[i]);
    }
}

long long C(int n, int r) {
    if (r < 0 || r > n) return 0;
    return f[n] * iv[r] % M * iv[n - r] % M;
}

void sl() {
    int n;
    cin >> n;
    
    vector<long long> a(n + 1);
    long long s = 0;
    
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
        s += a[i];
    }

    long long k = s / n;
    long long r = s % n;

    long long bc = 0;
    int cs = 0;
    int cl = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i] <= k) {
            cs++;
            bc += (k - a[i]);
        } else {
            cl++;
        }
    }

    if (bc > a[0]) {
        cout << 0 << "\n";
        return;
    }

    long long tw = 0;

    for (int x = 0; x <= cs; x++) {
        int y = r - x;
        
        if (y < 0 || y > cl) continue;

        if (bc + x <= a[0]) {
            long long ws = C(cs, x);
            long long wl = C(cl, y);
            
            long long cc = (ws * wl) % M;
            tw = (tw + cc) % M;
        }
    }

    tw = (tw * f[r]) % M;
    tw = (tw * f[n - r]) % M;

    cout << tw << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    pc();
    
    int t;
    cin >> t;
    while (t--) {
        sl();
    }
    return 0;
}