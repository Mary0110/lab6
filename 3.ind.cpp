#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter s:\n";
    getline(cin,s);
    s += ' ';
    int k1,k2, counter = 0, space = 0, i = 0, k;
    string s1, s2, emp;

    for(i; s[i]; i++)
    {
        if(s[i] == ' ')
        {
            space++;          //������� ��������
            if (counter == 0) //������ �����
            {
                for(int j = i - 1; s[j] != ' ' && j > -1; j--)
                {
                    s1 += s[j];  //�����1 � ��� �������
                    k1 = i - j - 1;  //����� �����1

                }
                counter++;
            }
            else if(counter == 1)   //������ �����
            {
                for(int j = i - 1; s[j] != ' ' && j > -1; j--)
                {
                    s2 += s[j];   //�����2 � ��� �������
                    k2 = i - j - 1;  //����� �����2
                    k = i + 1;       //������ ���������� �����
                }
                counter++;
            }
        }
        if(counter == 2)
        {
            for(k2; k2 > -1; k2--)
            {
                cout<<s2[k2];
            }
            cout<<" ";
            for(k1; k1 > -1; k1--)
            {
                cout<<s1[k1];
            }
            cout<<" ";
            s1 = emp;
            s2 = emp;
            counter=0;
        }
    }
    if(space % 2 == 1)
        for(k; s[k] != ' '; k++)
        {
        cout<<s[k];
        }
}
