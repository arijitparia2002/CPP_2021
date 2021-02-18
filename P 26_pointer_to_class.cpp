#include<iostream>
using namespace std;

class Demo{
	public:
		int a = 20;
		int b;
		
		void demoFunc(){
			cout<<"I am a member function."<<endl;
		}
		void showData(){
			cout<<"Value of b : "<<b<<endl;
		}
	};
int main(){
	Demo obj;
	Demo *ptr;
	
	ptr = &obj;
	
	cout<<"Accessing data member from class : "<<ptr->a<<endl; //accessing data member by pointer
	ptr->demoFunc();//accessing member function by pointer
	
	int Demo::*ptr1 = &Demo::b;
	obj.*ptr1 = 30;
	obj.showData();
	
	ptr->*ptr1 = 44;
	ptr->showData();//using pointer
	
	}
