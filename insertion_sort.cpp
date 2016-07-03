#include<iostream.h>
#include<conio.h>
class insertion{
	int s,i,j;
	int arr[20],t[20];
	public:
	void read();
	void sorting();
	void display();
};
void insertion::read(){
	cout<<"\nEnter the size:";
	cin>>s;
	cout<<"\nEnter the elements:";
	for(i=0;i<s;i++){
		cin>>arr[i];
	}
}
void insertion::sorting(){
	for(i=1;i<s;i++){
		for(j=0;j<i;j++){
			if(arr[i]<arr[j]){
				t[i]=arr[i];
				for(int k=i;k>j;k--){
					arr[k]=arr[k-1];
				}
				arr[j]=t[i];
			}
		}
	}
}
void insertion::display(){
	cout<<"\nThe sorted array:\n\n";
	for(i=0;i<s;i++){
		cout<<arr[i]<<"\t";
	}
}
void main(){
	insertion i;
	clrscr();
	i.read();
	i.sorting();
	i.display();
	getch();
}
