#include<iostream>
using namespace std;

class Demo{
	public:
		int a = 20;
		
		void demoFunc(){
			cout<<"I am a member function.";
		}
	};
int main(){
	Demo obj;
	Demo *ptr;
	
	ptr = &obj;
	
	cout<<"Accessing data member from class : "<<ptr->a<<endl; //accessing data member by pointer
	ptr->demoFunc();//accessing member function by pointer
}
