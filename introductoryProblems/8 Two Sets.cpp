#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    long long target = sum / 2;
    vector<int> set1;
    long long cur = 0;
    for (int i = n; i >= 1; i--) {
        if (cur + i <= target) {
            set1.push_back(i);
            cur += i;
        }
    }

    set<int> s1(set1.begin(), set1.end());
    vector<int> set2;
    for (int i = 1; i <= n; i++)
        if (!s1.count(i)) set2.push_back(i);

    cout << "YES\n" << set1.size() << "\n";
    for (int x : set1) cout << x << " ";
    cout << "\n" << set2.size() << "\n";
    for (int x : set2) cout << x << " ";
    cout << "\n";
    return 0;
}
