#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter string:";
    cin >> s;
    string s2;
    int p = -1;
    bool f = 0, f1 = 0;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        if (s[i] == '+')
        {
            p = i;
        }
    }
    for ( int i = 0; i < len; i++)
    {
        if (s[i] == '0' && f1 == 0) //если ноль и в строке ещё нет чисел - пропускаем его
            continue;

        if (f == 0 && s[i] == '-' && i > p)
        {
            s2 += "-";
            f = 1; //получается отрицательное число, вторые минусы не нужны
        }

        if (s[i] >= '0' && s[i] <= '9')
        {
            f = 1; //число не может быть уже отрицательным
            f1 = 1; //можно записывать нули.
            s2 += s[i];
        }
    }
    cout<<s2;
}
