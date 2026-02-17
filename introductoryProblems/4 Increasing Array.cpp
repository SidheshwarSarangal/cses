#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long moves = 0;
    int prev = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < prev)
            moves += prev - x;  // raise x to prev
        else
            prev = x;
    }
    cout << moves << endl;
    return 0;
}
