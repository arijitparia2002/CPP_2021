#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, str[i]);
    }

    for (int i = 0; i < 3; i++)
    {

        string s = str[i];
        int l = 3;
        if (s.length() < l)
            l = s.length();
        for (int i = 0; i < l; i++)
        {

            cout << s[i];
        }
        cout << s;
        for (int i = 0; i < l; i++)
        {

            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}