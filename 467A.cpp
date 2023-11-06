#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    int n;
    cin >> n;
    int p[n], q[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
        int s = q[i] - p[i];
        if (s >= 2)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}