#include<iostream>
using namespace std;

class Car{
	public:
		
	Car(){
		cout<<"Constructor: Called Autometically."<<endl;
	}
	~Car(){
		cout<<"DEstructor: Called autometically."<<endl;
	}
};

int main(){
	Car car1;
}
