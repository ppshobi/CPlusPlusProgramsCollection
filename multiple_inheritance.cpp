#include <iostream.h>
#include <conio.h>
class A{
public:
  	A(){ 
  		cout << "A\'s constructor called" << endl; 
	}
}; 
class B{
public:
	B(){ 
		cout << "B\'s constructor called" << endl; 
	}
}; 
class C: public B, public A{
public:
	C(){ 
		cout << "C\'s constructor called" << endl; 
	}
}; 
int main(){
	clrscr();
	cout<<"\n===========================================\n";
	cout<<"Program to Demonstrate Multiple Inheritance\n";
	cout<<"\n===========================================\n";
    C obj;
    getch();
    return 0;
}

===========================================
Program to Demonstrate Multiple Inheritance
===========================================
B's constructor called
A's constructor called
C's constructor called