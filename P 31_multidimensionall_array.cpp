//Multidimensional arrray

#include<iostream>
using namespace std;
int main(){
	int r=3,c=4;
	int arr[r][c] = {{2,3,4,5},
	                {6,7,8,9},
					{10,11,12,13}
					};
	cout<<arr[2][3]<<endl;//3rd row 4th column
	cout<<"All elements : "<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
