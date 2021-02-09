//swap without 3rd variable
#include<iostream>
using namespace std;
int main(){
	int a;//10
	int b;//20
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	a=a+b;//10+20=30
	b=a-b; //30-20=10
	a=a-b; //30-10=20 //swaped
	cout<<"a = "<<a<<", b = "<<b;
	
}
