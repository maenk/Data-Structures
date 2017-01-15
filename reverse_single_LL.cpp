#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	
};
node*head=NULL;
	
void insert()
{
	node*ptr=head;
	node*newnode= new node;
	newnode->next=NULL;
 	cout<<"enter data"<<endl;
 	cin>>newnode->data;
 	
 	if(head==NULL)
 	{
 		head=newnode;
 		
	 }
	 else
	 
	 {
	 	while(ptr->next!=NULL)
	 	{
	 		ptr=ptr->next;
		 }
	 ptr->next=newnode;
	newnode->next=NULL;
	 }

}
void reverse()
{
	node*ptr=head->next;
	node*nptr=ptr;
	head->next=NULL;
	while(nptr!=NULL)
	{
		nptr=nptr->next;
		ptr->next=head;
		head=ptr;
		ptr=nptr;
	}
	
}
void display()
{
	node*ptr=head;
	while(ptr!=NULL)
	{
		cout<<"->"<<ptr->data;
		ptr=ptr->next;
	}
}
int main()
{
	cout<<"enter size"<<endl;
	int n,p;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	insert();
	}
	reverse();
		display();
			cout<<endl<<endl;
}
