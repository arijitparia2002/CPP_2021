 #include<iostream>
 #include<string>
 using namespace std;
 
 class Student{
 	public:
 	string name;
 	int age;
 	int roll;
 	void display(){  // declearing inside class..
 		cout<<"i am inside the Class.\n";
	 }
	void details(); 
 };
 void Student ::details(){   //declearing method outside the class..
 		cout << "Student name is " <<name; 
 		cout <<"\nAge :"<<age;
 		cout <<"\nRoll no"<<roll;
	 }
 int main(){
 	
 	Student student1={"Arijit Paria", 18, 58};
 	student1.display();
 	student1.details();
 }
