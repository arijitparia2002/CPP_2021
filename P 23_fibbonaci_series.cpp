#include<iostream>
using namespace std;
 int fibbonaci(int n){
	if(n == 0 || n==1 ){
 		return n ;
	 }
    return (fibbonaci(n-1)+fibbonaci(n-2)) ;

}
 int main(){
  int n, i=0;
  cout<<"Enter the number of terms you want to print: "<<endl;
  cin>>n;	
  while(i<n){
  	cout<<fibbonaci(i)<<" ";
  	i++;
  }
 }
