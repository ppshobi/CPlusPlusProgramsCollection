#include <iostream.h>
#include <conio.h>
class A {
	public:
	  void display(){
	      cout<<"Base class content.";
	  }
};
class B : public A{

};

class C : public B{
 
};

int main(){
	clrscr();
	cout<<"\n===========================================\n";
	cout<<"Program to Demonstrate Multilevel Inheritance\n";
	cout<<"\n===========================================\n";
    C obj;
    obj.display();
    getch();
    return 0;
}