/*
You are given a list of n-1 integers and these integers are in the range from 1 to n. 
There are no duplicates in the list. One of the integers is missing in the list. 
The task is to find the missing number.
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total = n * (n + 1) / 2;  // sum of 1 to n
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        long long val;
        cin >> val;
        sum += val;
    }
    cout << total - sum << endl;
    return 0;
}
