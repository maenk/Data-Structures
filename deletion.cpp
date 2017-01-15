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
int deletebegin()
{
	
	node*ptr=head;
 	if(head==NULL)
 	{
 	cout<<"nothing to delete"<<endl;
 	return 0;
 		
	 }
	 else
	 
	 {
	 head=head->next;
	
	 }
}
void deleteend()
{
	node*ptr=head;
node*preptr=head;
	if(head==NULL)
 	{
 	cout<<"nothing to delete"<<endl;
 	return ;
 		
	 }
	 else
	 
	 {
	 	while(ptr->next!=NULL)
	 	{
	 	preptr=ptr;
		 	ptr=ptr->next;
		 }
	 preptr->next=NULL;
		 }

}
void deletemid()
{
	int count=0,count1=0;
	node*preptr=head;
	node*ptr=head;
 	if(head==NULL)
 	{
cout<<"nothing to delete"<<endl;
 	return;
 	 		
	 }
	 else
	 
	 {
	 	while(ptr!=NULL)
	 	{
	 		count++;
	 		ptr=ptr->next;
		 }
		 ptr=head;
	 	while(count1!=count/2)
	 	{
	 		preptr=ptr;
	 		ptr=ptr->next;
	 		count1++;
		 }
	 preptr->next=ptr->next;
	 
	
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
	cout<<"delete begin"<<endl;
		deletebegin();
			display();
			cout<<endl<<endl;
			
	cout<<"delete end"<<endl;		
		deleteend();
		display();
		cout<<endl<<endl;
	
	cout<<"delete mid"<<endl;
	deletemid();
	display();
	cout<<endl<<endl;
}
