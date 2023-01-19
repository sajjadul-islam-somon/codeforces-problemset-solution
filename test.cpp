#include <iostream>
#include <string>
#define tle ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    
using namespace std;
int main()
{
    int t, start = 0;
    string str;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        cin.ignore();
        cin >> str;
        if (str[0] == '+' || str[2] == '+')
        {
            start++;
        }
        else if (str[0] == '-' || str[2] == '-')
        {
            start--;
        }
    }
    cout << start << endl;
    return 0;
}