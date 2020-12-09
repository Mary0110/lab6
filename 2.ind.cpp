#include<string>
#include<iostream>
using namespace std;

int main()
{
    char symbol; string s;

    cout<<"Enter string:\n";
    cin>>s;
    cout<<"Enter symbol:\n";
    cin>>symbol;
    cout<<endl;

    for (int i = 0; s[i]; i++)
    {
       if(s[i] != symbol)
       {
           cout<<s[i];
       }
    }
}
