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
int insertinsorted()
{
	int val;
	node*ptr=head;
	node*preptr=head;
	cout<<"enter the data"<<endl;
	cin>>val;
	node*newnode=new node;
	newnode->data=val;
	newnode->next=NULL;
	
	while(ptr->data<val && ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	if(ptr->next==NULL)
	{
	ptr=ptr->next;
	preptr=preptr->next;
	}
	else if(ptr==head)
{
	newnode->next=head;
	head=newnode;
}
else
{	
preptr->next=newnode;
	newnode->next=ptr;
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
		insertinsorted();
		display();
			cout<<endl<<endl;
}
