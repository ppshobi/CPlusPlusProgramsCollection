#include<iostream.h>
#include<conio.h>
class search{
	int i,j,a[' '],s,item;
	public:
	void read();
	void lsearch();
	void bsearch();
	void sort();
	void display();
 };
 void search::read(){
	cout<<"\nEnter the size\n************\n : ";
	cin>>s;
	cout<<"\nEnter the elements..\n*****************\n";
	for(i=0;i<s;i++){
		cin>>a[i];
	}
	cout<<"The Enterd ellements are\n*************** \n";
	for(i=0;i<s;i++){
		cout<<a[i]<<"\t";
	}
 }
 void search::sort(){
	int l,t,k;
	for(i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	cout<<"\nThe sorted elements are\n*******************\n";
	for(i=0;i<s;i++){
		cout<<a[i]<<"\t";
	}
}
void search::lsearch(){
	int flag=0,k;
	cout<<"\n Enter the element to be searched : ";
	cin>>k;
	for(int i=0;i<s;i++){
		if(a[i]==k){
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"\nThe element is found";
	else
		cout<<"\nElement is not found !!!";
 }
 void search::bsearch(){
	cout<<"\nEnter element to be searched : ";
	cin>>item;
	int big=0;
            int end=s-1;
	int mid=(big+end)/2;
	while(big<=end){
		if(item==a[mid]){
			cout<<"\nITEM found";
			return;
		}
		else if(item<a[mid]){
			end=mid-1;
		}
	else
		big=mid+1;
		mid=(big+end)/2;
	}
	cout<<"\nItem Not found !!!";
}
void main(){
	search l;
	int item;
	char ch1;
	clrscr();
	int ch;
	l.read();
	do{
		cout<<"\n\t\t\tMENU\t\t\n\t\t\t****\n\t\t\t****\n";
		cout<<"\n1.Binary search\n2.Linear search\n";
		cout<<"\n\nEnter a choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				l.sort();
				l.bsearch();
				break;
			case 2:
				l.lsearch();
				break;
			default:
				break;
		}
		cout<<"\nDo u want to continue(y/n):";
		cin>>ch1;
	}
	while(ch1=='y'||ch1=='Y');
	getch();
}
