#include<iostream.h>
#include<conio.h>
class poly{
	struct term
	{
		int coeff;
		int exp;
	}t[100];
	int n;
	public:
	poly();
	void create();
	void display();
	void add(poly,poly);
};
poly::poly(){
		n=0;
		for(int i=0;i<100;i++)
		{
			t[i].coeff=0;
			t[i].exp=0;
		}
}
void poly::create(){
	cout<<"\nEnter no of terms in the  polynomial:";
	cin>>n;
            cout<<"\nEnter the elements of the polynomial:";
	for(int i=0;i<n;i++)
	{
		cin>>t[i].coeff;
		cin>>t[i].exp;
	}
}
void poly::display(){
	int flag=0;
	for(int i=0;i<n;i++){
		if(t[i].exp!=0)
		cout<<t[i].coeff<<"X^"<<t[i].exp<<"+";
		else
		{
			cout<<t[i].coeff;
			flag=1;
		}
	}
	if(flag==0)
	cout<<"\b\b\b\b\b";
}
void poly::add(poly p1,poly p2){
	int l=p1.n+p2.n;
	int i,j;
	for( i=0, j=0;n<l;n++){
		if((p1.t[i].coeff==0)&&(p2.t[j].coeff==0))
		break;
		if(p1.t[i].exp>p2.t[j].exp){
			t[n].coeff=p1.t[i].coeff;
			t[n].exp=p1.t[i].exp;
			i++;
		}else if(p1.t[i].exp==p2.t[j].exp){
			t[n].coeff=p1.t[i].coeff+p2.t[j].coeff;
			t[n].exp=p1.t[i].exp;
			i++;
			j++;
		}else{
			t[n].coeff=p2.t[j].coeff;
			t[n].exp=p2.t[j].exp;
			j++;
		}
	}
}
void main(){
	poly p1,p2,p3;
	clrscr();
	cout<<"\n First polynomial....";
	p1.create();
	cout<<"\n Second polynomial......";
	p2.create();
	cout<<"\n\nThe resultant polynomial:";
	p3.add(p1,p2);
	p3.display();
	getch();
}
