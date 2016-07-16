#include<iostream.h>
#include<conio.h>

class complex{
  int a,b;
  public:
    void getval(){
      cout<<"\nEnter the value of a Complex Number a,b:\n";
      cin>>a>>b;
    }
    complex operator+(complex obj){
      complex t;
      t.a=a+obj.a;
      t.b=b+obj.b;
      return(t);
    }   
    void display(){
      cout<<a<<"+"<<"i"<<b<<"\n";
    }
};

int main()
{
  clrscr();
  cout<<"\n===========================================\n";
  cout<<"Program to Demonstrate Operator Overloading\n";
  cout<<"\n===========================================\n";
  complex obj1,obj2, result;
  obj1.getval();
  obj2.getval();
  result = obj1+obj2; 
  cout<<"Your Complex Numbers:\n";
  obj1.display();
  obj2.display();  
  cout<<"Result of addition:";
  result.display(); 
  getch();
  return 0;
}
