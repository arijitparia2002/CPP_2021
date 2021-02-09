#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	cout<<"Enter the name :";
	//cin>>name;
	//to get the whole line // Scan the SPACE also
	getline(cin, name);
	cout<<"The name is : "<<name;
	return 0;
}
