#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

bool hasUniqueDigit(int year)
{
    set<int> checkedDigit;
    while (year > 0)
    {
        int digit = year % 10;
        if (checkedDigit.count(digit) > 0)
        {
            return false;
        }
        checkedDigit.insert(digit);
        year = year / 10;
    }
    return true;
}

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        if (hasUniqueDigit(year))
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}