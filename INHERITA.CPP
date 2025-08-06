#include<iostream.h>
#include<conio.h>

// Single Inheritance.
class A{
public:
	void showA(){
		cout<<"Class A (Base Class)\n";
	}
};

// Multilevel Inheritance.
class B : public A {
public:
	void showB(){
		cout<<"Class B (Derived from A)\n";
	}
};

class C : public B{
public:
	void showC(){
		cout<<"Class C (Derived from B)\n";
	}
};

//Hierarchical Inheritance.
class D : public A{
public:
	void showD(){
		cout<<"Class D (Also derived from A)\n";
	}
};

//Multiple Inheritance.
class E1{
public:
	void showE1(){
		cout<<"Class E1\n";
	}
};

class E2{
public:
	void showE2(){
		cout<<"Class E2\n";
	}
};

class F : public E1, public E2{
public:
	void showF(){
		cout<<"Class F (Multiple Inheritance)\n";
	}
};

//Hybrid Inheritance.
class G1 : virtual public A {
public:
	void showG1(){
		cout<<"Class G1 (virtual derived from A)\n";
	}
};

class G2 : virtual public A {
public:
	void showG2(){
		cout<<"Class G2 (virtual derived from A)\n";
	}
};

class H : public G1, public G2 {
public:
	void showH(){
		cout<<"Class H (Hybrid Inheritance)\n";
	}
};

void main(){
	clrscr();

	cout<<"\n--Single \ Multilevel Inheritance--\n";
	C c;
	c.showA();
	c.showB();
	c.showC();

	cout<<"\n--Hierarchical Inheritance--\n";
	D d;
	d.showA();
	d.showD();

	cout<<"\n--Multiple Inheritance--\n";
	F f;
	f.showE1();
	f.showE2();
	f.showF();

	cout<<"\n-- Hybrid Inheritance--\n";
	H h;
	h.showA();
	h.showG1();
	h.showG2();
	h.showH();

	getch();

}