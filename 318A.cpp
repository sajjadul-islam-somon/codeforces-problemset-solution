#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
        // k is in the odd numbers
        cout << k * 2 - 1 << endl;
    } else {
        // k is in the even numbers
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    return 0;
}
