#include<iostream.h>
#include<conio.h>
class  queue{
	int rear,front,s;
	int *q;
	public:
	queue(){
		cout<<"Enter the size : ";
		cin>>s;
		q=new int[s];
		front=rear=-1;
	}
	~queue(){
		delete q;
	}
	void insert(int);
	int del();
	void display();
};
void queue::insert(int item){
	if(rear==s-1)
	{
		cout<<"\nFull";
		return;
	}
	q[++rear]=item;
	if(front==-1)
	front=0;
}
int queue::del(){
	int data;
	if(front==-1)
	{
		cout<<"\nEmpty";
		return NULL;
	}
		data=q[front];
		q[front]=0;
		if(front==rear)
		front=rear=-1;
		else
		front++;
		return data;
}
void queue::display(){
		if(front==-1)
		{
			cout<<"\nEmpty";
			return;
		}
		cout<<"\nElements are \n";
		for(int i=front;i<=rear;i++)
		cout<<q[i]<<"\t";
}
void main(){
	char ch1;
	int ch;
	int item;
	clrscr();
	queue q;
	do
	{
		cout<<"\n\t\tMENU\n\n";
		cout<<"1.Insert\n2.Delete\n3.Display";
		cout<<"\nEnter a choice:" ;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter an item:";
				cin>>item;
				q.insert(item);
				break;
			case 2:
				item=q.del();
				if(item==NULL)
				break;
				else
				cout<<"\nDeleted item is:"<<item;
				break;
			case 3:
				q.display();
				break;
			default:break;
		}
		cout<<"\nDo u want to continue(y/n):";
		cin>>ch1;
	}
	while(ch1=='y'||ch1=='Y');
	getch();
}
