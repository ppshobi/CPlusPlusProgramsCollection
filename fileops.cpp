#include <fstream.h>
#include <iostream.h>
#include <conio.h>
int main ()
{
   char data[100];
   clrscr();
   cout<<"\n=====================================\n";
   cout<<"Program to Demonstrate File Operations\n";
   cout<<"\n=====================================\n";
   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");
   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);
   // write inputted data into the file.
   outfile << data << endl;
   cout << "Enter your age: ";
   cin >> data;
   cin.ignore();
   // again write inputted data into the file.
   outfile << data << endl;
   // close the opened file.
   outfile.close();
   // open a file in read mode.
   ifstream infile;
   infile.open("afile.dat");
   cout << "\nReading from the file\n" << endl;
   infile >> data;
   // write the data at the screen.
   cout << data << endl;
   // again read the data from the file and display it.
   infile >> data;
   cout << data << endl;
   // close the opened file.
   infile.close();
   getch();
   return 0;
}
