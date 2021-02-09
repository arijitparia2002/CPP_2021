#include<iostream>
using namespace std;
	class Car{
		private:
		string carName;
		int modelNumber;
		int maxSpeed;
 	public:Car(string n, int x, int y){
		carName = n;
		modelNumber = x;
		maxSpeed = y;
	}
	void details(){
		cout<<"The car name is : "<<carName<<endl;
		cout<<"Model No: "<<modelNumber<<endl;
		cout<<"Maximum speed: "<<maxSpeed<<endl;
	}
	};
	int main(){
		Car car1("BMW", 52453, 500), car2("Honda", 455634, 300);
		car1.details();
		car2.details();
	}

