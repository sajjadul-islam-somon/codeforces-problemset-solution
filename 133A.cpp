#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    string s;
    getline(cin, s);
    for (char c : s)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}