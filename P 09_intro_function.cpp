#include<iostream>
using namespace std;

int sum(int x, int y){ 
 	int s = x + y;
 	return s ;
 }
int main(){
	cout<<sum(11,22)<<endl; // reuse the same code
	cout<<sum(33,44)<<endl;
	
}
