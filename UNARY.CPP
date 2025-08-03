#include<iostream.h>
#include<conio.h>

class unary{
	int num;

public:
	unary(int n = 0);

	friend void operator++(unary &u);
	friend void operator--(unary &u);

	void display();

};

	unary::unary(int n){
		num = n;
}

void operator++(unary &u){
	u.num = u.num + 1;
}

void operator--(unary &u){
	u.num = u.num - 1;
}

void unary::display(){
	cout <<"value = " << num << "\n";
}

void main(){
	clrscr();

	unary u1(10);

	cout << "Original Value:\n";
	u1.display();

	++u1;

	cout << "After Increment:\n";
	u1.display();

	--u1;

	cout << "After Decrement:\n";
	u1.display();

	getch();

}