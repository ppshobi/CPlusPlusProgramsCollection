#include<iostream.h>
#include<conio.h>
class list
{
	struct node
	{
		int data;
		node *link;
	}*p;
	public:
	list()
	{
		p=NULL;
	}
	void create(int);
	void merge(list &l1,list&l2);
	void display();
	~list();
};
void list::create(int item)
{
	node *r,*temp;
	temp=p;
	r=new node;
	r->data=item;
	if(p==NULL||p->data>item)
	{
		p=r;
		p->link=temp;
	}
	else
	{
	while(temp!=NULL)
	{
	   if(temp->data<item && (temp->link->data>item||temp->link==NULL))
		{
			r->link=temp->link;
			temp->link=r;
			return;
		}
		temp=temp->link;
	}
	r->link=NULL;
	temp->link=r;
	}
}
void list::merge(list &l1,list &l2)
{
	node *temp;
	temp=NULL;
	if(l1.p==NULL && l2.p==NULL)
		return;
	while(l1.p!=NULL && l2.p!=NULL)
	{
		if(p==NULL)
		{
			p=new node;
			temp=p;
		}
		else
		{
			temp->link=new node;
			temp=temp->link;
		}
		if(l1.p->data<l2.p->data)
		{
			temp->data=l1.p->data;
			l1.p=l1.p->link;
		}
		else
		{
			if(l1.p->data>l2.p->data)
			{
				temp->data=l2.p->data;
				l2.p=l2.p->link;
			}
			else
			{
				if(l1.p->data==l2.p->data)
				{
					temp->data=l1.p->data;
					l1.p=l1.p->link;
					l2.p=l2.p->link;
				}
			}
		}
	}
	while(l1.p!=NULL)
	{
		temp->link=new node;
		temp=temp->link;
		temp->data=l1.p->data;
		l1.p=l1.p->link;
	}
	while(l2.p!=NULL)
	{
		temp->link=new node;
		temp=temp->link;
		temp->data=l2.p->data;
		l2.p=l2.p->link;
	}
	temp->link=NULL;
}
void list::display()
{
	node *temp;
	temp=p;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->link;
	}
}
list::~list()
{
	node *temp;
	while(p!=NULL)
	{
		temp=p->link;
		delete p;
		p=temp;
	}
}
void main()
{
	clrscr();
	int item,i,m,n;
	list l1,l2,l3;
	cout<<"\nEnter 1st list limit :";
	cin>>m;
	cout<<"\nEnter elements :\n";
	for(i=0;i<m;i++)
	{
		cin>>item;
		l1.create(item);
	}
	cout<<"\nEnter 2nd list limit :";
	cin>>n;
	cout<<"\nEnter elements :\n";
	for(i=0;i<n;i++)
	{
		cin>>item;
		l2.create(item);
	}
	l3.merge(l1,l2);
	cout<<"\nThe Merged list is \n";
	l3.display();
	getch();
}
