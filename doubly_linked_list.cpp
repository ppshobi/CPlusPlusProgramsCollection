#include<iostream.h>
#include<conio.h>
class dlist{
	struct node{
		node *prev;
		int data;
		node *next;
	}*p;
	public:
	dlist(){
		p=NULL;
	}
	void append(int);
	void del(int);
	void display();
	~dlist();
};
void dlist::append(int item){
	node *temp,*r;
	temp=new node;
	temp->data=item;
	temp->next=NULL;
	if(p==NULL){
		temp->prev=NULL;
		p=temp;
	}else{
		r=p;
		while(r->next!=NULL)
		r=r->next;
		temp->prev=r;
		r->next=temp;
	}
}
void dlist::del(int item){
	node *temp;
	temp=p;
	while(temp!=NULL){
		if(temp->data==item){
			if(temp==p){
				p=p->next;
				p->prev=NULL;
			}else if(temp->next==NULL)
				temp->prev->next=NULL;
			else{
				temp->next->prev=temp->prev;
				temp->prev->next=temp->next;
			}
			delete temp;
			return;
		}
		temp=temp->next;
	}
	cout<<"\nNot found";
}
void dlist::display(){
	node *temp;
	temp=p;
	while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}
dlist::~dlist(){
	node *temp;
	while(p!=NULL){
		temp=p->next;
		delete p;
		p=temp;
	}
}
void main(){
	clrscr();
	dlist l;
	char ch1 ;
	int ch,item;
	do{
		cout<<"\n\t\t\tMENU\n\n";
		cout<<"1.Append\n2.Delete\n3.Display";
		cout<<"\n\nEnter a choice:";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter an item";
				cin>>item;
				l.append(item);
				break;
			case 2:
				cout<<"\nEnter item to be deleted";
				cin>>item;
				l.del(item);
				break;
			case 3:
				l.display();
				break;
			default:
				break;
		}
		cout<<"\nDo you want to continue(y\Y)";
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	getch();
}
