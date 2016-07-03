#include<iostream.h>
#include<conio.h>
class cqueue{
	int rear,front,s;
	int *cq;
	public:
	cqueue(){
		cout<<"\n\nEnter the size of the circular queue : ";
		cin>>s;
		cq=new int[s];
		front=rear=-1;
	}
	~cqueue(){
		delete cq;
	}
	void insert(int);
	int del();
	void display();
};
void cqueue::insert(int item){
	if(((rear==-1)&&(front==0))||(front==rear+1)){
		cout<<"\n\nFULL";
		return;
	}
	if(rear==s-1)
		rear=0;
	else
		rear++;
	cq[rear]=item;
	if(front==-1)
		front=0;
}
int cqueue::del(){
	if(front==-1){
		cout<<"\n\nEMPTY";
		return NULL;
	}
	int data=cq[front];
	cq[front]=0;
	if(front==rear)
		front=rear=-1;
	else if(front==s-1)
		front=0;
	else
		front++;
	return data;
}
void cqueue::display(){
	if(front==-1){
		cout<<"\n\nEMPTY";
	}
	cout<<"\n\nElements are ";
	for(int i=0;i<=s;i++){
		cout<<cq[i]<<"\t";
	}
}
void main(){
	int ch,item;
	char ch1;
	clrscr();
	cqueue cq;
	do{
		cout<<"\n\t\t\tMENU\t\n";
		cout<<"\n1.Insert\n2.Delete\n3.Display";
		cout<<"\n\nEnter a choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\n\nEnter the item : ";
				cin>>item;
				cq.insert(item);
				break;
			case 2:
				item=cq.del();
				if(item==NULL)
				break;
				else
				cout<<"\n\nDeleted item is:"<<item;
				break;
			case 3:
				cq.display();
				break;
			default:break;
		}
		cout<<"\n\nDo you want to continue(y\Y) : ";
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	getch();
}
