#include<iostream>
using namespace std;

int main(){
	int *ptr;//wild pointer //cause we haven't aqssigned anyhing to it.
	int x=22;
	ptr = &x;//*ptr not a wild pointer anymore.//normal pointer
    
    int *ptr1 = NULL;//null pointer//pointing to nothing//not storing an address
    cout<<"Null pointer : "<<ptr1<<endl;
    
    
    
}
