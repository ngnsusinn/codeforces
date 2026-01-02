#include <iostream>
#include <algorithm>

using namespace std;

int solve(int wa, int da, bool w) {
    int h = 0;
    int cur = 1;
    bool isW = w; 
    while (true) {
        if (isW) {
            if (wa >= cur) {
                wa -= cur;
            } else {
                break;
            }
        } else {
            if (da >= cur) {
                da -= cur;
            } else {
                break;
            }
        }
        h++;
        cur *= 2;
        isW = !isW;
    }
    return h;
}

void casein() {
    int a, b;
    cin >> a >> b;
    int c1 = solve(a, b, true);
    int c2 = solve(a, b, false);
    cout << max(c1, c2) << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        casein();
    }
    return 0;
}