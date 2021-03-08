#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream demo_file;
	demo_file.open("demo_file",ios::out);
	
	if(!demo_file){
		cout<<"File not created!"<<endl;
	}else{
		cout<<"File is created successfully"<<endl;
		demo_file.close();
	}
}
