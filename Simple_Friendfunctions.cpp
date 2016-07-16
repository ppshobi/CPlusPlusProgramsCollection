#include<iostream.h>
#include<conio.h>

class  base{
    int val1,val2;
  public:
    void get(){
      cout<<"Enter two values:";
      cin>>val1>>val2;
    }
    friend float mean(base ob);
};

//friend function defenition
float mean(base ob){
   return float(ob.val1+ob.val2)/2;
}

int main(){
  clrscr();
  cout<<"\n=======================================\n";
  cout<<"Program to Demonstrate Friend Functions";
  cout<<"\n=======================================\n";
  base obj;
  obj.get();
  cout<<"\n Mean value is : "<<mean(obj);
  getch();
  return 0;
}          
