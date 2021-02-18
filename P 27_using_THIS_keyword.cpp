#include<iostream>
using namespace std;

class Demo{
	public:
	int a;
	int b;
	
	void setValue(int a, int b){
		this->a = a;
		this->b = b;
	}
	void showValue(){
		cout<<"Value of a and b are : "<<a<<" and "<<b<<endl;
	}
};
	int main(){
		Demo obj1;
		obj1.setValue(12,23);
		obj1.showValue();
		
		
	}
	
