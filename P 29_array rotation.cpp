
#include<iostream>
using namespace std;

void rotateLeft(int *arr,int n){
	int temp = arr[0];
	for(int i = 1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
void rotateLeft(int *arr, int n, int d){
	for(int i =0;i<d;i++){
		rotateLeft(arr,n);
	}
}
void printArray(int arr[],int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n = 5;
	int arr[n]={11,22,33,44,55};
	rotateLeft(arr,n);
	printArray(arr,n);
	
	cout<<endl<<"rotating 3 places left : "<<endl;
	rotateLeft(arr,n,3);
	printArray(arr,n);
}
