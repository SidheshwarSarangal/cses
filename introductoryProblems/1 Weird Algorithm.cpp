/*
You are given an integer n. You want to perform the following operations on it:

If n is even, you can replace it with n/2.
If n is odd, you can replace it with 3n+1.
You can perform these operations repeatedly until n becomes 1.
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << n;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;  // even: divide by two
        else
            n = n * 3 + 1;  // odd: multiply by three and add one
        cout << " " << n;
    }
    cout << endl;
    return 0;
}
