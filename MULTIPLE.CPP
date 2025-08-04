#include<iostream.h>
#include<conio.h>

class A{
public:
	int a;

	void set_a(){
		a = 5;
	}

	void show_a(){
		cout<<"a = "<< a << "\n";
	}

};

class B{
public:
	int b;

	void set_b(){
		b = 10;
	}

	void show_b(){
		cout<<"b = "<< b << "\n";
	}
};

class D : public A, public B{
	int c;

public:
	void mul(){
		c = a * b;
	}

	void display(){
		cout<<"a = "<< a <<"\n";
		cout<<"b = "<< b <<"\n";
		cout<<"c = "<< c <<"\n";
	}
};

void main(){
	clrscr();
	D d;

	d.set_a();
	d.set_b();
	d.mul();
	d.show_a();
	d.show_b();
	d.display();

	d.b = 20;
	d.mul();
	d.display();
	getch();
}