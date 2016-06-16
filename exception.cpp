#include <iostream.h>
#include <conio.h>

double division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero Exception!";
   }
   return (a/b);
}

int main ()
{
   int x = 50;
   int y = 0;
   double z = 0;
   clrscr();
   cout<<"\n=====================================\n";
   cout<<"Program to Demonstrate Exception Handling\n";
   cout<<"\n=====================================\n";
   try {
    z = division(x, y);
    cout << z << endl;
   }catch (const char* msg) {
    cerr << msg << endl;
   }
   getch():
   return 0;
}
