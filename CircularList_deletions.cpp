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
	 	while(ptr->next!=head)
	 	{
	 		ptr=ptr->next;
		 }
	 head=head->next;
	ptr->next=head;	
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
	 	while(ptr->next!=head)
	 	{
	 	preptr=ptr;
		 	ptr=ptr->next;
		 }
	 preptr->next=head;
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
	 	while(ptr->next!=head)
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
