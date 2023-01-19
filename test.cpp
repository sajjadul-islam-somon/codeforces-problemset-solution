#include<iostream>
// #include<string>
#include<algorithm>

using namespace std;
int main()
{
    char ch;
    string str1, str2;

    getline(cin,str1);
    getline(cin,str2);

    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    transform(str2.begin(),str2.end(),str2.begin(),::toupper);

    int a = str1.compare(str2);

    cout<<a<<endl;
}