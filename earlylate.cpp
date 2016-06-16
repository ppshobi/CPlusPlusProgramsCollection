#include <iostream.h>
#include <conio.h>

class EarlyShape {
   protected:
      int width, height;
   public:
      EarlyShape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      int area()
      {
         cout << "\nParent class area :" <<endl;
         cout <<"\n width = "<<width<<"height = "<<height;
         return 0;
      }
};
class Rectangle: public EarlyShape{
   public:
      Rectangle( int a=0, int b=0)
      {
        EarlyShape(a, b);
      }
      int area ()
      {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};

//Late Binding Enabled Class
class LateShape {
   protected:
      int width, height;
   public:
      LateShape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()
      {
         cout << "Parent class area :" <<endl;
         cout <<"\n width = "<<width<<"height = "<<height;
         return 0;
      }
};
class Rectangle1: public LateShape{
   public:
      Rectangle1( int a=0, int b=0)
      {
        LateShape(a, b);
      }
      int area ()
      {
         cout << "Rectangle class area :" <<endl;
         cout << width;
         return (width * height);
      }
};
// Main function for the program
int main()
{
   clrscr();
   cout<<"\n=====================================\n";
   cout<<"Program to Demonstrate Early and Late Binding\n";
   cout<<"\n=====================================\n";

   //Early Binding Demo
   EarlyShape *EarlyShape;
   Rectangle DemoRec(10,7);

   // store the address of Rectangle
   EarlyShape = &DemoRec;
   // call rectangle area.
   EarlyShape->area();
   cout<<"\nThe error is because its Early Binding\n";

   //Late Binding Demo
   LateShape *LateShape;
   Rectangle1 DemoRec2(10,7);
   // store the address of Rectangle
   LateShape = &DemoRec2;
   // call rectangle area.
   LateShape->area();
   cout<<"\nThe error is Now Clear. Because its Late Binding\n";
   getch();
   return 0;
}
