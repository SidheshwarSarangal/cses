#include <bits/stdc++.h>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    int cur = 1, mx = 1;
    for (int i = 1; i < (int)dna.size(); i++) {
        if (dna[i] == dna[i - 1])
            cur++;
        else
            cur = 1;  // new run, reset count
        mx = max(mx, cur);
    }
    cout << mx << endl;
    return 0;
}
