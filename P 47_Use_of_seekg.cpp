#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream myFile("test.txt",ios::in|ios::out|ios::trunc);
	myFile<<"Hello World";
	
	myFile.seekg(6, ios::beg);
	
	char ch[6];
	myFile.read(ch,5);
	ch[5]=0;
	cout<<ch<<endl;
	myFile.close();
	
}
