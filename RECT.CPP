#include<iostream.h>
#include<conio.h>

//class definition for rectangle
class Rectangle{
//private number varibles
	int length, width;

//public access specifier
public:
//member function to set values of length and width
	void setDimensions(int l, int w){
		length = l;
		width = w;
	}
//member function to display length,width, and area
	void display(){
		cout << "Length : " <<length << "\n";
		cout << "Width : " << width << "\n";
		cout << "Area : " << (length * width) << "\n";
	}
};

//Main function - program execution starts here
void main(){

	clrscr();

	Rectangle r;
	r.setDimensions(10, 5);
	r.display();

	getch();
}