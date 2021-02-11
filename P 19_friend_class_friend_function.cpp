#include<iostream>
#include <string>
using namespace std;
 class FriendA{
 	private:
 		string username = "arijit2002";
 		string password = "123asd";
 		
 	public:
 		friend class FriendB;
 		friend void friendFunction(FriendA obj);
 };
 class FriendB{
 	public:
 		void display(FriendA obj){ //parameter passed
 			cout<<"Printing data from class FriendA on FriendB : "<<endl;
 			cout<<obj.username<<endl<<obj.password<<endl;
		 }
 };
 void friendFunction(FriendA obj){ //taking input of type FriendA
 		cout<<"Printing data from class FriendA on Friend Function : "<<endl;
 		cout<<obj.username<<endl<<obj.password<<endl;
 	
 }
 int main(){
 	FriendA obj1; 
 	FriendB obj2;
 	
 	obj2.display(obj1);//pass parameter of type FriendA
 	friendFunction(obj1);
 }

