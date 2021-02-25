//addition of two Matrices
#include<iostream>
using namespace std;
int main(){
	int r=3,c=4;
	int arr[r][c] = {{2,3,4,5},
	                {6,7,8,9},
					{10,11,12,13}
					};
	int arr1[r][c] = {{22,33,44,55},
	                {65,76,87,98},
					{10,11,12,13}
					};
	int sum[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		sum[i][j]=arr[i][j] + arr1[i][j];
			}
		}
	cout<<"Final Matrix : "<<endl;	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
}
