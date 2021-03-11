#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	file.open("test1.txt", ios::in|ios::out|ios::trunc);
	
	string s;
	cout<<"Enter something for file: "<<endl;
	getline(cin,s);  //user input
	file<<s;
	
	char A[18];
	file.seekg(8,ios::beg); 
	file.read(A,17); //read 8 to 25 char
	A[17]=0;
	cout<<A<<endl;
	file.close();
	
	}
