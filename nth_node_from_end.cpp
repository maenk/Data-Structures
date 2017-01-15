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
int nth_node_from_end()
{
	int n,count=0;
	cout<<"enter n"<<endl;
	cin>>n;
	node*ptr=head;
	node*nptr=head;
	 
	 while(nptr->next!=NULL)
	 {
	 	count++;
	 	
	 	if(count-n>0)
	 	{
	 		ptr=ptr->next;
		 }
		 nptr=nptr->next;
	 }
	cout<<ptr->data<<endl<<endl;
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
	nth_node_from_end();
		display();
			cout<<endl<<endl;
}
