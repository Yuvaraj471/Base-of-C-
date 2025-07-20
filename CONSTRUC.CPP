#include<iostream.h>
#include<conio.h>

//Define a class named 'sample'
class sample{
	int x;//Private data member

public:
//Default constructor
	sample(){
	    x = 0;
	    cout << "Default constructor called :\n";
	    }
//Parameterized constructor
	sample(int a){
	    x = a;
	    cout << "Parameterized constructor called :\n";
	    }
//copy constructor
	sample(const sample &obj){
	    x = obj.x;
	    cout << "copy constructor called :\n";
	    }
//Destructor
	~sample(){
	    cout << "Destructor called for X =" << x << "\n";
	    }
//Function to display the value of X
	void show(){
	    cout << "Value of X : " << x << "\n";
	    }
	};

void main() {
	clrscr();

//create a local block to force destruction before getch()
	{
	//calls default constructor
	sample s1;
	//calls parameterized constructor
	sample s2(100);
	//calls copy constructor
	sample s3 = s2;

	s1.show();
	s2.show();
	s3.show();
	}

	getch();

	}