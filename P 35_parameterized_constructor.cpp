#include<iostream>
using namespace std;
class Sum{
	public:
		int a,b,c;
	Sum(int a,int b,int c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	void showData(){
		cout<<"Sum is :" <<a+b+c<<endl;
	}
	
};
int main(){
	Sum sumObj(12,12,13);//passing value 
	sumObj.showData();
}
