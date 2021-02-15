#include<iostream>
using namespace std;
int main(){
	
	int a = 12;
	int *p;
	void *p1; //void pointer//can store any type
	p = &a; //address asiigned to p
	p1 = &a;
	
	int **p2; // to store adress of  another ponter
	p2 = &p; //storing address of ponter p1
	
	cout<<"Address of a is : "<<p<<endl;
	cout<<"The value of a is : "<<*p<<endl; //printing value using pointer
	cout<<"The value of a is_using void pointer : "<<*(int*)p1<<endl;
	
	cout<<"Address "<<*p2<<endl<<"Value "<<**p2;
}
