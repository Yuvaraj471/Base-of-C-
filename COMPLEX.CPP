#include<iostream.h>
#include<conio.h>

class complex{
	float real, imag;

public:
	complex(float r = 0, float i = 0){
		real = r;
		imag = i;
	}

	friend complex operator+(complex c1, complex c2);
	friend complex operator-(complex c1, complex c2);
	friend complex operator*(complex c1, complex c2);

	void display(){
		cout<<"Result = " << real;
		if(imag >= 0)
			cout<<" + " << imag << "i\n";
		else
			cout<<" - " << -imag << "i\n";
	}
};

complex operator+(complex c1, complex c2){
	complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}

complex operator-(complex c1, complex c2){
	complex temp;
	temp.real = c1.real - c2.real;
	temp.imag = c1.imag - c2.imag;
	return temp;
}

complex operator*(complex c1, complex c2){
	complex temp;
	temp.real = (c1.real * c2.real) - (c1.imag * c2.imag);
	temp.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
	return temp;
}

void main(){
	clrscr();

	complex c1(2, 3);
	complex c2(1, 4);
	complex result;

	cout << "First Complex Number: 2 + 3i\n";
	cout << "Second Complex Number: 1 + 4i\n";

	result = c1 + c2;
	cout << "\nAfter Addition:\n";
	result.display();

	result = c1 - c2;
	cout << "\nAfter Subtraction:\n";
	result.display();

	result = c1 * c2;
	cout << "\nAfter Multiplication:\n";
	result.display();

	getch();
}
