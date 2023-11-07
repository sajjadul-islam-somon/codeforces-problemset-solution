#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    int n;
    cin >> n;
    int coin[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
        sum = sum + coin[i];
    }
    sort(coin, coin + n, greater<int>()); //sort in descending order
    sum /= 2;
    int c = 0, result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result + coin[i];
        c++;
        if (result > sum)
        {
            break;
        }
    }
    cout << c << endl;

    return 0;
}