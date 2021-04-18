#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sorting(string s[], int n)
{
    for (int i = 1; i < n; i++)
    {
        string temp = s[i];
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = temp;
    }
}

int main()
{
    fstream demo_file;
    int n, i = 0;
    cout << "Enter number of names in file: " << endl;
    cin >> n;
    string str[n];
    demo_file.open("test.txt", ios::in);
    if (!demo_file)
    {
        cout << "Oops!! Error Occured!";
    }
    else
    {

        string s1;
        cout << "Reading the file..." << endl;
        while (!demo_file.eof())
        {
            getline(demo_file, s1);
            str[i] = s1;
            i++;
        }
        demo_file.close();
    }
    sorting(str, n);
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}