#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	cout<<"Type your name : "<<endl;
	
	getline(cin,name);//takes the whole line. 
	cout<<name[0]<<endl;//printing indivisual char.
	cout<<name<<endl;//print whole string.
	
	//getline()//push_back()//pop_back()
	name.push_back('2');//addes a char at end.
	cout<<name<<endl;
	
	name.pop_back(); //delete end char.
	cout<<name<<endl;
	
	//capacity()
	cout<<name.capacity();
	
	//length()
	cout<<name.length()<<endl;
	
	//shrink_to_fit()
	name.shrink_to_fit();
	cout<<"Capacity after Shrink: "<<name.capacity()<<endl;

	//resize()
	name.resize(5);
	cout<<"Size After Resize : "<<name.length()<<endl;
	cout<<"String after resize to 5 : "<<name<<endl;
	
	
	
	
}
