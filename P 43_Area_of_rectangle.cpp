#include<iostream>
using namespace std;
class Area{
	private:
	int length,breadth;
	public:
	void setDim(){
		cout<<"Enter length and breadth of the rectangle : "<<endl;
		cin>>length>>breadth;
	}
	int getArea(){
		return (length*breadth);
	}
};
int main(){
	Area r1;
	r1.setDim();
	cout<<"Area = "<<r1.getArea();
}
