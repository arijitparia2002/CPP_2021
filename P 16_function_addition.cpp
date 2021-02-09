#include<iostream>
using namespace std;

void add(int first, int second){
	int res = first + second;
	cout<<"The result of ("<<first<<" + "<<second<<") is : "<<res<<endl;
}
void add(int first, int second, int third){
	int res = first + second;
	cout<<"The result of ("<<first<<" + "<<second<<" + "<<third<<") is : "<<res<<endl;
}
void add(int first, int second, int third, int fourth){
	int res = first + second;
	cout<<"The result of ("<<first<<" + "<<second<<" + "<<third<<" + "<<fourth<<") is : "<<res<<endl;
}
int main(){
	add(12, 13);   //different function with same name..
	add(11,22,33);//polymorphism//ovrloading of function
	add(12,34,45,56);//change the number of arguments it'll catch different function..
	return 0;
}
