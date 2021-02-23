#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void moveZerosEnd(int *arr, int n){
	int res[n] = {0};
	int j =0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
		res[j]=arr[i];
		j++;	
		}
	}
	for(int i =0;i<n;i++){
		arr[i]=res[i];
	}
}
int main(){
	int n = 11;
	int arr[n]={11,0,0,22,0,34,44,0,0,0,99};
	moveZerosEnd(arr,n);
	printArray(arr,n);
}
