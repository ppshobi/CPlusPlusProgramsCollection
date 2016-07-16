#include <iostream.h>
#include <string.h>
#include <conio.h>
int main ()
{
  char str1[10] = "Hello";
  char str2[10] = "World";
  char str3[10];
  int  len, cmpresult ;
  clrscr();
  cout<<"\n=====================================\n";
  cout<<"Program to Demonstrate String Functions\n";
  cout<<"\n=====================================\n";
  // copy str1 into str3
  strcpy( str3, str1);
  cout << "strcpy( str3, str1) : " << str3 << endl;

  // total lenghth of str1 after concatenation
  len = strlen(str1);
  cout << "strlen(str1) : " << len << endl;

  //comparing 2 strings
  cmpresult = strcmp(str1,str2);
  cout << "\nstrcmp(str1,str2):";
  if(cmpresult>0){
    cout<<str1<<" is greater than "<< str2;
  }
  else if(cmpresult<0){
    cout<<str1<<" is lesser  than "<< str2;
  }
  else {
    cout<<" Both strings are equal";
  }
  // concatenates str1 and str2
  strcat( str1, str2);
  cout << "\nstrcat( str1, str2): " << str1 << endl;

  //find first occurence of a charactor in string
  cout<< "\nstrchr(str1,'e'):"<<strchr(str1, 'e');

  //find a string in another string
  cout<< "\nstrstr(s1, str2):"<<strstr(str1, str2);

  getch();
  return 0;
}
