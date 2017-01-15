#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node*prev;
	
};
node*head=NULL;
	
void insertbegin()
{
	
	
	node*newnode= new node;
	newnode->next=NULL;
	newnode->prev=NULL;
 	cout<<"enter data"<<endl;
 	cin>>newnode->data;
 	
 	if(head==NULL)
 	{
 		head=newnode;
 		
	 }
	 else
	 
	 {
	 newnode->next=head;
	head=newnode;
	 }
}
void insertend()
{
	node*ptr=head;
	node*newnode= new node;
	newnode->next=NULL;
	newnode->prev=NULL;
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
	 newnode->prev=ptr;
	newnode->next=NULL;
	 }

}
void insertmid(int n)
{
	int count=0;
	node*preptr=head;
	node*ptr=head;
	node*newnode= new node;
	newnode->next=NULL;
 	cout<<"enter data for insertion in middle"<<endl;
 	cin>>newnode->data;
 	
 	if(head==NULL)
 	{
 		head=newnode;
 		
	 }
	 else
	 
	 {
	 	while(count!=n/2)
	 	{
	 		preptr=ptr;
	 		ptr=ptr->next;
	 		count++;
		 }
	 preptr->next=newnode;
	 newnode->next=ptr;
	 newnode->prev=preptr;
	
	 }


}
void display()
{
	node*ptr=head;
	while(ptr!=NULL)
	{
		cout<<"<-->"<<ptr->data;
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
		cout<<"press 1 for insert beginnig"<<endl<<"2 for inserton at end"<<endl;
		cin>>p;
		if(p==1)
		insertbegin();
		else if(p==2)
		insertend();
	}
	insertmid(n);
	
	display();
}
