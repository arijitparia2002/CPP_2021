#include<iostream>
using namespace std;

class  Demo{
 	public:
 		int x,y,z,w;
 		
 		Demo(int x1, int y1,int z1, int w1=10){  //w1 is default argument
		 x=x1, y=y1, z=z1, w=w1 ;
	}
 	void showData(){
 		cout<<x<<" "<<y<<" "<<z<<" "<<w<<endl;
	 }
	int getSum(){
		return (x+y+z+w);
	}
 };
 
 int main(){
 	Demo d1(11,22,33); //w is initialized by default
 	
 	d1.showData();
 	cout<<d1.getSum();
 }
