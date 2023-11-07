#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    
    int ms = m[0], c=1;
    for (int i = 0; i < n; i++)
    {
        if (m[i] != ms)
        {
            c++;
            ms = m[i];
        }
    }
    cout << c << endl;

    return 0;
}