#include<iostream>
using namespace std;
void increment1(int a){ //taking value
	a++;
	cout<<"Increment : "<<a<<endl;
}

void increment2(int &a){ //tcall by ref.
	a++;
	cout<<"Increment : "<<a<<endl;
}

void increment3(int *a){ //tcall by adress
	(*a)++;
	cout<<"Increment : "<<*a<<endl;
}
int main(){
	int x= 5;
	cout<<"Call by value : "<<endl;
	increment1(x); //calling by value
	cout<<"The value in the main: "<<x<<endl;
	
	cout<<"Call by referance : "<<endl;
	increment2(x); //calling by referance
	cout<<"The value in the main: "<<x<<endl;
	
	cout<<"Call by address : "<<endl;
	int y = 10;
	increment3(&y); //calling by adress
	cout<<"The value in the main: "<<y<<endl;
}
