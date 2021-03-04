 #include<iostream>
 using namespace std;
 
 class  Demo{
 	private:
 		const int x,y,z;//wecan initialize constant by initializer
 	public:
 		Demo(int i=0, int j=0, int k=0):x(i),y(j),z(k){}; // syntax
		  				    //can not initialize constant with constructor
 	void showData(){
 		cout<<x<<" "<<y<<" "<<z<<endl;
	 }
 };
 
 int main(){
 	Demo d1(11,22,33);
 	
 	d1.showData();
 }
