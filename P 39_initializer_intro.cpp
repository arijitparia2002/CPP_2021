 #include<iostream>
 using namespace std;
 
 class  Demo{
 	private:
 		int x,y,z;
 	public:
 		Demo(int i=0, int j=0, int k=0):x(i),y(j),z(k){}; // syntax
		 
 	void showData(){
 		cout<<x<<" "<<y<<" "<<z<<endl;
	 }
 };
 
 int main(){
 	Demo d1(11,22,33);
 	
 	d1.showData();
 }
