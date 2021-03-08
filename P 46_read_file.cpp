#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    fstream demo_file;
    string str;
    demo_file.open("demo_file.txt", ios::in);
    if (!demo_file) {
        cout << "File not created!";
    }
    else {

        string s1;
        cout<<"Reading the file..."<<endl;
        while (!demo_file.eof() ){
            getline(demo_file, s1);
            cout << s1 <<endl;
        }
        demo_file.close();
    }
    return 0;
}
