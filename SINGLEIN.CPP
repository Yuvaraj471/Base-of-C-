#include<iostream.h>
#include<conio.h>

class B{
public:
	int a, b;

	void set_ab(){
		a = 5;
		b = 10;
	}

	void show_a(){
		cout<<"a = "<< a << "\n";
		cout<<"b = "<< b << "\n";
	}
};

class D: public B {
	int c;

public:
	void mul(){
		c = b * a;
	}

	void display(){
		cout<<"a = "<< a << "\n";
		cout<<"b = "<< b << "\n";
		cout<<"c = "<< c << "\n";
	}
};

void main(){
	clrscr();
	D d;
	d.set_ab();
	d.mul();
	d.show_a();
	d.display();

	d.b = 20;
	d.mul();
	d.display();
	getch();
}