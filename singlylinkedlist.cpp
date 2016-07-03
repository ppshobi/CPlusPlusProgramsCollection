#include<iostream.h>
#include<conio.h>
class list{
	struct node{
		int data;
		node *link;
	}*p;
	public:
	list(){
		p=NULL;
	}
	void append(int item);
	void addbegin(int);
	void del(int);
	void count();
	void display();
	~list();
};
void list::append(int item){
	node *temp1,*temp2;
	temp1=new node;
	temp1->data=item;
	temp1->link=NULL;
	if(p==NULL)
	p=temp1;
	else{
		temp2=p;
		while(temp2->link!=NULL)
		temp2=temp2->link;
	}
	temp2->link=temp1;
}
void list::addbegin(int item){
	node *temp;
	temp=new node;
	temp->data=item;
	temp->link=p;
	p=temp;
}
void list::del(int item){
	node *old, *temp;
	temp=p;
	while(temp!=NULL){
		if(temp->data==item){
			if(temp==p)
				p=p->link;
			else
				old->link=temp->link;
			delete temp;
			return;
		}
		else{
			old=temp;
			temp=temp->link;
		}
	}
	cout<<"\nItem not found";
}
void list::count(){
	node *temp;
	temp=p;
	int c=0;
	while(temp!=NULL){
		temp=temp->link;
		c++;
	}
	cout<<"\n\nNumber of elements is"<<c;
}
void list::display(){
	node *temp;
	temp=p;
	while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}
list::~list(){
	node *temp;
	while(p!=NULL){
		temp=p->link;
		delete p;
		p=temp;
	}
}
void main(){
	clrscr();
	list l;
	char ch1 ;
	int ch,item;
	do{
		cout<<"\n\t\t\tMENU\n\n";
		cout<<"1.Append\n2.Add at begining\n3.Delete\n4.Count\n5.Display";
		cout<<"\n\nEnter a choice:";
		cin >>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter an item";
				cin>>item;
				l.append(item);
				break;
			case 2:
				cout<<"\nEnter an item";
				cin>>item;
				l.addbegin(item);
				break;
			case 3:
				cout<<"\nEnte item to be deleted";
				cin>>item;
				l.del(item);
				break;
			case 4:
				l.count();
				break;
			case 5:
				l.display();
				break;
			default:
				break;
		}
		cout<<"\nDo you want to continue(y\Y)";
		cin>>ch1;
	}
	while(ch1=='y'||ch1=='Y');
	getch();
}