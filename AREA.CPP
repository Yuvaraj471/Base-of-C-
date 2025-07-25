#include<iostream.h>
#include<conio.h>

class AreaCalculator{
public:
	//Area of square
	float area(int side){
		return side * side;
	}
	//Area of rectangle
	float area(int length, int breadth){
		return length * breadth;
	}
	//Area of radius
	float area(float radius){
		return 3.14 * radius * radius;
	}
};

void main(){
	clrscr();
	AreaCalculator a;
	int choice;

	cout<<"---Menu Driven Program - Area Using Function Overloading---\n";
	cout<<"1. Area of square\n";
	cout<<"2. Area of rectangle\n";
	cout<<"3. Area of circle\n";
	cout<<"Enter Your Choice:";
	cin>> choice;

	switch(choice){
		case 1:{
			int s;
			cout<<"Enter side of square:";
			cin>>s;
			cout<<"Area of Squarec ="<<a.area(s);
			break;
			}
		case 2: {
			int l, b;
			cout<<"Enter length and breadth of rectangle :";
			cin>>l>>b;
			cout<<"Area of Rectangle = "<<a.area(l,b);
			break;
			}
		case 3:{
			float r;
			cout<<"Enter radius of circle:";
			cin>>r;
			cout<<"Area of circle ="<<a.area(r);
			break;
			}
			default:
				cout<<"Invalid Choice!";
		}
		getch();
	}