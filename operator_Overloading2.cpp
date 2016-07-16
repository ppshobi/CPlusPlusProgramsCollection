#include<iostream.h>
#include<conio.h>

class complex{
  int a,b;
  public:
    complex() {
      cout<<"Enter the value of a Complex Number a,b:";
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
   complex obj1,obj2, result;
   result = obj1+obj2; 
   cout<<"Your Complex Numbers:\n";
   obj1.display();
   obj2.display();  
   cout<<"Result of addition:";
   result.display(); 
   getch();
   return 0;
}