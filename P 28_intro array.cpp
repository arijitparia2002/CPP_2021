#include<iostream>
using namespace std;
int main(){
	int arr[7] = {12,22,34,55,81};
	
	cout<<arr[1]<<endl;//element at index 1
	
	cout<<"All elements in the array: "<<endl;
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<endl;
	}
	cout<<"Out of bound: "<<endl;
	cout<<arr[8]<<endl;
	
	cout<<arr[6]<<endl;//if no value initialized default will be zero.
		
}
