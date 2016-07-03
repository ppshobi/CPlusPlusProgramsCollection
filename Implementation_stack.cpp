#include<iostream.h>
#include<conio.h>
class stack{
	int top,size;
	int *st;
	public:
	stack()
	{
		cout<<"Enter size : ";
		cin>>size;
		st=new int[size];
		top=-1;
	}
	~stack()
	{
	delete st;
	}
	void push(int);
	int pop();
	void display();
};
void stack::push(int item){
	if(top==size-1)
	{
		cout<<"Stack Full!!";
		return;
	}
	st[++top]=item;
}
int stack::pop(){
	if(top==-1)
	{
		cout<<"Stack Empty!!";
		return NULL;
	}
	int data=st[top--];
	return data;
}
void stack::display(){
	if(top==-1)
	{
		cout<<"Stack Empty!!";
	}
	cout<<"Elements are.....\n";
	for(int i=top;i>=0;i--)
	{
		cout<<st[i]<<"\t";
	}
}
void main(){
	int item,ch;
	char ch1;
	clrscr();
	stack st;
	do{
		cout<<"......MENU...\n";
		cout<<" 1.insert\n 2.delete\n 3.display\n";
		cout<<"Enter choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter item : ";
				cin>>item;
				st.push(item);
				break;
			case 2:
				item=st.pop();
				if(item==NULL){
					break;
				}else{
					cout<<"Deleted item is "<<item;
					break;
				}
			case 3:
				st.display();
				break;
			default:
				break;
		}
			cout<<"\nDo you want to continue(y/n) : ";
			cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	getch();
}
