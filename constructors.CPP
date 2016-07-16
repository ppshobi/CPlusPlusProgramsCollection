#include<iostream.h>
#include<conio.h>

class constructors{
int a;
public:
   	constructors();
   	constructors(int);
   	constructors(const constructors &obj);
   	~constructors();
};

constructors::constructors(){
	cout<<"\nDefault constructor is invoked\n";
}
constructors::constructors(int x){
	cout<<"\nParameterized constructor invoked\n";
	a= x;
	cout<<"\nInitialized variable a = "<<a;
}
constructors::constructors(const constructors &obj){
 	cout<<"\nCopy Constructors Invoked with a refernece object\n";
 	a=obj.a;
 	cout<<"\nNew object initialized with values from another object\n";
 	cout<<"a = "<<a<<endl;
}

void main(){
	cout<<"\n===================================================\n";
	cout<<"Program to demonstrate Different types of constructors\n";
	cout<<"\n=====================================================\n";
	//calling default constructor
	constructors c1;
	//calling parametrerized constructor
	constructors c2(10);
	//calling copy constructor
	constructors c3(c2);
	getch();
}