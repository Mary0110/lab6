#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"enter s: ";
    getline(cin, s);
    int a[256] = {};
    int n = s.size();

    for (int i = 0; i < n; i++)
        a[s[i]]++;

    long long ans = 1;

    for (int i = 0; i < n; i++)
        ans *= i + 1;

    for (int i = 0; i < 256; i++)
        for (int j = 0; j < a[i]; j++)
            ans /= j + 1;
cout << ans;
}
