#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	cin>>str;
	transform(str.begin(), str.end(), str.begin(), :: tolower);
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
		{
			cout<<"."<<str[i];
		}
	}
	cout<<"\n";
	return 0;
}
