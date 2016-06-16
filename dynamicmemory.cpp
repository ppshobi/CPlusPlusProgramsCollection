#include <iostream>
#include <conio.h>
int main ()
{
  clrscr();
  cout<<"\n=====================================\n";
  cout<<"Program to Demonstrate Dynamic Memory Allocation\n";
  cout<<"\n=====================================\n";
  // Pointer initialized with null
  double* pvalue  = NULL;
  // Request memory for the variable
  pvalue  = new double;
  // Store value at allocated address
  *pvalue = 29494;
  cout << "Value of pvalue : " << *pvalue << endl;
  // free up the memory.
  delete pvalue;
  getch():
  return 0;
}
