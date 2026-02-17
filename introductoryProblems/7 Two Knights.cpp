#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {
        long long total = k * k * (k * k - 1) / 2;     // C(k^2, 2)
        long long attacks = 4 * (k - 1) * (k - 2);     // attacking pairs
        cout << total - attacks << "\n";
    }
    return 0;
}
