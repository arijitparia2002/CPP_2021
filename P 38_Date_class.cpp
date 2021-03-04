#include<iostream>
using namespace std;

class Date{
	private:
		int day,month,year;
	public:	
	void set_date(int d, int m, int y){
		if(m>12){
			d=1,m=1,y=1990;
		}
		else if(m==2 && d>29){
			d=1,m=1,y=1990;
		}else if(m==4,6,9,11 && d>30){
			d=1,m=1,y=1990;
		}else if(d>31){
			d=1,m=1,y=1990;
		}
		day =d;
		month=m;
		year=y;
	}
	void print_date(){
		switch(month){
			case 1:cout<<"January";
			break;
			case 2:cout<<"February";
			break;
			case 3:cout<<"March";
			break;
			case 4:cout<<"April";
			break;
			case 5:cout<<"May";
			break;
			case 6:cout<<"June";
			break;
			case 7:cout<<"July";
			break;
			case 8:cout<<"August";
			break;
			case 9:cout<<"September";
			break;
			case 10:cout<<"October";
			break;
			case 11:cout<<"Novembar";
			break;
			case 12:cout<<"December";
			break;
		}
		cout<<" ";
		if(day<10){
			cout<<0;
		}
		cout<<day<<","<<year;		
	}
};
 int main(){
 	Date d1;
	d1.set_date(10,13,2001);
	d1.print_date();
 	 }
