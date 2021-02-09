#include<iostream>
using namespace std;

enum direction{East=3,West,North, South};//enumarate data type
int main(){                            //default East == 0
 direction d1,d2;
 d1 = North;
 d2 = West;
 cout<<"The value of d1 : "<<d1<<endl;
 cout<<"The value of d2 : "<<d2<<endl;	
}
