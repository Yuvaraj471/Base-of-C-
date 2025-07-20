#include<iostream.h>
#include<conio.h>

//Static variables to keep count of created objects
class Counter {
     static int count;

public:
//constructor increments the count every time an object is created
	Counter() {
		count++;
	}
//Static function to return the current count value
	static int getcount() {
		return count;
	}
};

//Define and initialize the static member variable outside the class
int Counter::count = 0;

void main() {
	clrscr();

	//Creating three objects
	Counter c1, c2, c3;
	cout << "Total objects Created : " << Counter::getcount() <<"\n";

	getch();
}