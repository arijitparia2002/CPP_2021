#include<iostream>
using namespace std;
void arr_sum_prod(int n,int *a){
	int sum = 0, prod = 1;
 for(int i = 0;i<n; i++){
 	sum +=*(a + i);
 	prod *= *(a+i);
 }	
 cout<<"Sum is : "<<sum<<" product is : "<<prod<<endl;
}
int main(){
	int array[] = {1,2,3,4,54,56} ;
	arr_sum_prod(7, array);
	}
