#include<iostream>
using namespace std;

class Distance{
	int x,y;
	public:
		Distance(int x, int y){
			this->x = x;
			this->y = y;
		}
		void display(){
			cout<<"The value of x and y is :"<<x<<" "<<y<<endl;
			
		}
		Distance operator -(){  //operator overloading
			x = -x;
			y = -y;
			return Distance(x,y);
		}
		Distance operator ++(){ //increment
			x = ++x;
			y = ++y;
		}
			Distance operator --(){ //decrement
			x = --x;
			y = --y;
		}
	
};

int main(){
	Distance d1(-5,10), d2(11, -22);
	-d1;         //value getting reversed..
	d1.display();
	
	-d2; 
	d2.display();
	
	++d2;
	d2.display();
	
	--d1;
	d1.display();			
}
