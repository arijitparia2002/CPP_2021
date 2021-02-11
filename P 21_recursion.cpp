#include<iostream>
using namespace std;
int fact(int n){
	if(n==1 || n==0)
	return 1;
	else return (fact(n-1)*n);//recursion happenioong
}

int main(){
	int r = fact(5);
	cout<<"Result : "<<r<<endl;
}



