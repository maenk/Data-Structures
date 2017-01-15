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
	 ptr->next=newnode;
	newnode->next=head;
	 }

}
int check_if_cycle()
{
	node*ptr=head;
	node*fptr=head;
	do
	{
		ptr=ptr->next;
		fptr=fptr->next->next;
	}while(ptr!=fptr && fptr!=NULL);
	 
	if(fptr==NULL)
	{
		cout<<"NULL terminated"<<endl;
		return 0;
	}
	else
	{
		cout<<"cycle terminated"<<endl;
	}
	
}
void display()
{
	node*ptr=head;
	do
	{
		cout<<"->"<<ptr->data;
		ptr=ptr->next;
	}while(ptr!=head);
	
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
	check_if_cycle();
		//display();
			cout<<endl<<endl;
}
