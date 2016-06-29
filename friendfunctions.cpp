#include <iostream.h>
#include <conio.h>

class Rectangle {
	int width, height;
	public:
	void set_values (int, int);
	int area () {
		return (width * height);
	}
	friend Rectangle duplicate (Rectangle);
};
void Rectangle::set_values (int a, int b) {
	width = a;
	height = b;
}
Rectangle duplicate (Rectangle DemoRect)
{
	Rectangle NewRect;
	cout<<"\nAccessing private data of an object using Friend Function\n";
	NewRect.width = DemoRect.width;
	NewRect.height = DemoRect.height;
	return (NewRect);
}
int main () {
	cout<<"\n=====================================\n";
	cout<<"\nProgram to Demonstrate Friend Functions\n";
	cout<<"\n=====================================\n";
	clrscr();
	Rectangle recta, rectb;
	recta.set_values (2,3);
	rectb = duplicate (recta);
	cout <<"\nArea of old Rectangle "<< recta.area();
	cout <<"\nArea of duplicated Rectangle "<< rectb.area();
	getch();
	return 0;
}