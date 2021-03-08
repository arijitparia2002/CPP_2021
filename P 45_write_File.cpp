//Write File

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream demo_file;
	demo_file.open("demo_file.txt", ios::out);
	
	if(!demo_file){
		cout<<"File is not created"<<endl;
	}else{
		cout<<"The File is created Successfully"<<endl;
		demo_file<<"1.First line in the file."<<endl;
		
		string s;
		cout<<"Enter something for file: "<<endl;
		getline(cin,s);  //user input
		demo_file<<s;
		
		demo_file.close();
	}
}
