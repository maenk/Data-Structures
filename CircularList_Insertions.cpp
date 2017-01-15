#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	
};
node*head=NULL;
	
void insertbegin()
{
	node*ptr=head;
	node*newnode= new node;
	newnode->next=newnode;
	cout<<"enter data"<<endl;
 	cin>>newnode->data;
 	
 	if(head==NULL)
 	{
 		head=newnode;
 	 }
	 else
	 
	 {
	 	while(ptr->next!=head)
	 	{
	 		ptr=ptr->next;
		 }
	 newnode->next=head;
	 ptr->next=newnode;
	head=newnode;
	 }
}
void insertend()
{
	node*ptr=head;
	node*newnode= new node;
	newnode->next=newnode;
 	cout<<"enter data"<<endl;
 	cin>>newnode->data;
 	
 	if(head==NULL)
 	{
 		head=newnode;
 		newnode->next=head;
	 	
	 }
	 else
	 
	 {
	 	while(ptr->next!=head)
	 	{
	 		ptr=ptr->next;
		 }
	 ptr->next=newnode;
	newnode->next=head;
	 }

}
void insertmid(int n)
{
	int count=0;
	node*preptr=head;
	node*ptr=head;
	node*newnode= new node;
	
 	cout<<"enter data for insertion in middle"<<endl;
 	cin>>newnode->data;
 	
 	if(head==NULL)
 	{
 		head=newnode;
 		newnode->next=head;
	 	
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
	
	 }


}
void display()
{
	node*ptr=head;
	node*preptr=head;
	do{
		preptr=ptr;
		cout<<"->"<<ptr->data;
		ptr=ptr->next;
	}while(preptr->next!=head);
	
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
	//insertmid(n);
	
	display();
}
