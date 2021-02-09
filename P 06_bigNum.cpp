#include<iostream>
using namespace std;
int main(){
int firstNum, secondNum, thirdNum;
cout<<"Enter three numbers: ";
cin>>firstNum>>secondNum>>thirdNum;
int res = firstNum;
if(secondNum>res){
	res = secondNum;		
}
if(thirdNum>res){
	res = thirdNum;
}
cout<<"Greater number is :"<<res;
return 0 ;
}
