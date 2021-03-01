#include<iostream>
using namespace std;

class Sum{
	public:
		int a,b,c;
	Sum(int a,int b,int c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	void showData(){
		cout<<"Sum is :" <<a+b+c<<endl;
	}
	
};
int main(){
	Sum obj1(11,22,33);
	cout<<obj1.a<<" "<<obj1.b<<" "<<obj1.c<<endl;
	
	Sum obj2=obj1;// Copy constructor// all values of obj1 given to obj2
	              //Assigning values of another object of same classs
    cout<<obj2.a<<" "<<obj2.b<<" "<<obj2.c<<endl;
    
    obj1.showData();
    obj2.showData();
}

