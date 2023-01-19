#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, arr[5][5], t=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                a = i+1;
                b = j+1;
            }
        }
    }
    while (a != 3 || b != 3)
    {
        if (a > 3)
        {
            a--;
        }
        else if (a < 3)
        {
            a++;
        }
        else if (b > 3)
        {
            b--;
        }
        else if (b < 3)
        {
            b++;
        }
        t++;
    }
    cout<<t<<endl;
    return 0;
}
