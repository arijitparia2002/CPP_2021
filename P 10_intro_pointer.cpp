#include<iostream>
using namespace std;

int main(){
int a = 34;
int *p; // * is astriek
p = &a; // & is ampersand

cout<<"The adress is : "<<p<<endl;
cout<<"The value at adress p is : "<<*p;
return 0;
}
