#include<iostream.h>
#include<conio.h>
class matrix{    
int r1,r2,c1,c2,i,j,k,a[20][20],b[20][20],c[20][20];
  public:               
    matrix();                       
    void add();                       
    void sub();                       
    void div();                       
    void mult();               
};
matrix::matrix(){    
  cout << "enter the order of the 1st matix";    
  cin >> r1 >> c1;    
  cout << "enter elements in the 1st matrix";    
  for (i = 0; i < r1; i++)  
  for (j = 0; j < c1; j++)      
  cin >> a[i][j];    
  cout << "enter the order of the 2nd matrix";    
  cin >> r2 >> c2;    
  cout << "enter the elments";    
  for (i = 0; i < r2; i++)  
  for (j = 0; j < c2; j++)      
  cin >> b[i][j];
}
void matrix::add(){    
if (r1 == r2 && c1 == c2){
  for (i = 0; i < r2; i++)      
    for (j = 0; j < c2; j++)    
      c[i][j] = a[i][j] + b[i][j];  
  cout << "The Resultannt Matrix in addition is\n";  
  for (i = 0; i < r2; i++){      
    for (j = 0; j < c2; j++){
      cout << c[i][j] << '\t';    
  }      
  cout << "\n";      
}  
}else  
  cout << "matrix can not be added";
}

void matrix::sub(){    
if (r1 == r2 && c1 == c2){  
  for (i = 0; i < r2; i++)      
    for (j = 0; j < c2; j++)    
      c[i][j] = a[i][j] - b[i][j];  
  cout << "The Resultannt Matrix in substraction is\n";  
  for (i = 0; i < r2; i++){      
    for (j = 0; j < c2; j++){    
      cout << c[i][j] << '\t';    
  }     
  cout << "\n";      
  }  
}else  
  cout << "matrix can not be substracted";
}

void matrix::div(){    
if (r1 == r2 && c1 == c2){  
  for (i = 0; i < r2; i++)      
    for (j = 0; j < c2; j++)    
      c[i][j] = a[i][j] / b[i][j];
  cout << "The Resultannt Matrix in division is\n";  
  for (i = 0; i < r2; i++){
    for (j = 0; j < c2; j++){
      cout << c[i][j] << '\t';    
  }      
  cout << "\n";     
  }  
}else
  cout << "matrix can not be divided";
}

void matrix::mult(){
if (c1 == r2){
  for (i = 0; i < r1; i++){
    for (j = 0; j < c2; j++){
      c[i][j] = 0;    
      for (k = 0; k < c1; k++){
        c[i][j] += a[i][k] * b[k][j];        
      }   
    }      
  }  
  cout << "The Resultannt Matrix in multiplication is\n"; 
  for (i = 0; i < r1; i++){
    for (j = 0; j < c2; j++){
      cout << c[i][j] << '\t';
    }    
    cout << "\n";
  }
}else  
  cout << "Matrix can not be multiplied";
}

int main(){ 
  clrscr(); 
  cout<<"\n========================================\n";
  cout<<"\nProgram to Demonstrate Matrix Operations\n";
  cout<<"\n========================================\n";      
  matrix m;    
  int ch;
  char ch1;
  do{
    cout <<"\nMenu\n1.Addition\n2.Substraction\n3.Division\n4.Multiplication\nEnter your choice";
    cin >> ch; 
    switch (ch){
      case 1:m.add();break;
      case 2:m.sub();break;
      case 3:m.div();break;
      case 4:m.mult();break;
      default:break;     
    }
    cout << "\nDo You Want To Continue(y/n)";  
    cin >> ch1;    
  } while (ch1 == 'y' || ch1 == 'Y');    
  getch();
  return 0;
}

 
 
 
