#include<iostream>

using namespace std;

class Room {
  double length, height, breadth;

  public:
    void setLength(double l) {
      length = l;
    }
  void setHeight(double h) {
    height = h;
  }
  void setBreadth(double b) {
    breadth = b;
  }
  double getArea(){                 //calculate Area
  	return 2*(length*breadth + length*height + breadth*height);
  }
  double getVolume() {
    return length * breadth * height;
  }
  Room operator +(const Room &r) { //call by refarance....Room &r) [&r getting r2 address]
    Room room;                                                     // [this-> getting values of r1]
    room.length = this -> length + r.length;                       //room is getting the added values 
    room.breadth = this -> breadth + r.breadth; 
    room.height = this -> height + r.height;
	
	return room;                                                  // r3 getting the added values stored in room..
  }
};

int main() {
  Room r1, r2, r3;

  r1.setLength(11.0);
  r1.setBreadth(6.0);
  r1.setHeight(15.0);

  cout << "The volume of room1 is : " << r1.getVolume() << endl;

  r2.setLength(22.0);
  r2.setBreadth(12.0);
  r2.setHeight(33.0);

  cout << "The volume of room2 is : " << r2.getVolume() << endl;

  r3 = r1 + r2;     //calls the '+' operator

  cout << "The volume of room3 is : " << r3.getVolume() << endl;
  
  cout<<" The area og room3 is : " <<r3.getArea()<<endl;
  
}
