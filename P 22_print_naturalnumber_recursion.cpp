#include<iostream>
using namespace std;
void print(int x){
	if (x == 1 )
	cout<<x;
	else {
	cout<<x<<endl;
	print(x-1);
}
}
int main(){
	print(20);
}
