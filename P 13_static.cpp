#include<iostream>
using namespace std;
class Student{
	public:
		int rollNumber;
		static int systemId;
};
int Student::systemId = 3265642;
int main(){
	Student studentOne,studentTwo;
	studentOne.rollNumber = 58;
	cout<<studentOne.rollNumber<<endl<<studentOne.systemId<<endl;	
	
	studentTwo.rollNumber = 12;
	cout<<studentTwo.rollNumber<<endl<<studentTwo.systemId<<endl;
}
