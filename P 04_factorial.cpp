#include<iostream>
using namespace std;
int main(){
	int x, res =1;
	cout<<"Enter a number: ";
	cin >>x;
	for(int i = 1; i<=x;i++){
	res = res*i	;
	}
	cout<<"The Factorial of "<<x<<" is:"<<res;
}
