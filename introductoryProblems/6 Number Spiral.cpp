#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long n = max(y, x);
        long long base = (n - 1) * (n - 1);
        long long ans;
        if (n % 2 == 0) {
            if (y >= x)
                ans = base + 2 * n - x;
            else
                ans = base + y;
        } else {
            if (y >= x)
                ans = base + x;
            else
                ans = base + 2 * n - y;
        }
        cout << ans << "\n";
    }
    return 0;
}
