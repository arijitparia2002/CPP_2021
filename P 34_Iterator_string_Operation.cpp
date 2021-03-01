//Operation on String//iterator

#include<iostream>
#include<string>
#include<iterator>

using namespace std;

int main(){
	string name;
	cout<<"Type your name : "<<endl;
	getline(cin,name);
	
	std::string::iterator itr; //declaration
	std::string::reverse_iterator itr1; 

	for(itr=name.begin();itr!=name.end();itr++){
		cout<<*itr<<" ";
	}
	for(itr1=name.rbegin();itr1!=name.rend();itr1++){
		cout<<*itr1<<" ";
	}
}
	
