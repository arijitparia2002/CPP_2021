// sum and product of array
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int array[n];
	int sum = 0;
	int prdct = 1;
	cout<<"Enter the numbers in array: ";
	for(int i = 0;i<n; i++){
		cin>>array[i];
		sum += array[i];
		prdct *= array[i];	
	}
	cout<<"Sum  of the elements in the array is : "<<sum;
	cout<<"\nProduct  of the elements in the array is : "<<prdct;	
	return 0;
}
