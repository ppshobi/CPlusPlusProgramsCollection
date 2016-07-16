#include <iostream.h>
#include <conio.h>

int add(int x, int y) {
    cout<<"\nLate Binding\n";
    return x + y;
} 
int subtract(int x, int y) {
    cout<<"\nLate Binding\n";
    return x - y;
}
void multiply(int x, int y){
    cout<<"\nEarly Binding\n";
    cout<<"Result = "<< x*y;
}
int main() {
    clrscr();
    int x, y;
    cout << "Enter 2 Numbers\n";
    cin >> x >> y;
    int op;
    cout << "choose 0 for add, 1 for subtract ,2 for multiplya\n";
    cin >> op;

    int (*p)(int, int);  // Function Pointer
    // Set p to point to the function the user chose
    switch (op){
        case 0 : p = add;break; 
        case 1 : p = subtract;break;
        case 2 : multiply();
                return 0;
    }
    // Call the function that p is pointing to
    cout << "The answer is: " << p(x, y) << endl;
    getch():
    return 0;
}
