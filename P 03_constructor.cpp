 #include<iostream>
 #include<string>
 using namespace std;
 
 class Student{
 	public:
 	string name;
 	int age;
 	int roll;
 	void details(){
 		cout << "\nStudent name is: " <<name; 
 		cout <<"\nAge : "<<age;
 		cout <<"\nRoll no: "<<roll;
	 }
	Student(string n,int a, int r ){ // constructor declearation//called automatically
		name = n;
		age = a;
		roll = r;
		
	} 
 };
 int main(){
 	
 	Student student1("John doe", 22, 34);
 	Student student2("Bruce Wayne", 32, 43);
 	student1.details();
 	student2.details();
 }
