//Prg of Queue as alinked list.
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void insert();
void dele();
void show();

struct queue
{
       int roll;
       char name[20];
       struct queue *next;
};
struct queue *newnode, *f=NULL, *r=NULL, *temp;
void main()
{
     int choice;
     clrscr();
     //int choice;
     do
     {
	cout<<"\n\n\t\t QUEUE AS A LINKED LIST PROGRAM "<<endl;
	cout<<"\n 1 Insert "<<"\n";
	cout<<"\n 2 Delete "<<"\n";
	cout<<"\n 3 Show "<<"\n";
	cout<<"\n 4 Exit "<<"\n";
	cout<<"\n\t Enter your choice "<<"\n";
	cin>>choice;
	switch(choice)
	{
	  case 1 :
		insert();
		break;
	  case 2 :
		dele();
		break;
	  case 3 :
		show();
		break;
	  case 4 :
		exit(0);
		break;
	  default :
		cout<<" invalid entry "<<endl;
	}
     }while(choice!=4);
     getch();
}

void insert()
{
	newnode=new queue;
	cout<<"\n\t Enter roll : ";cin>>newnode->roll;
	cout<<"\t Enter name : ";gets(newnode->name);
	newnode->next=NULL;
	if(r==NULL)
	  {
		f=newnode;
		r=newnode;
	  }
	else
	  {
		r->next=newnode;
		r=newnode;
	  }
	  cout<<"\n\t ele inserted in queue "<<endl;
	  getch();
	  clrscr();
}

void show()
{
     temp=f;
     if(temp!=NULL)
     cout<<"\n\t Queue ele are ... "<<endl;
     else
     cout<<"\n\t Queue is empty "<<endl;
     while(temp!=NULL)
     {
	cout<<temp->roll<<" "<<temp->name<<endl;
	temp=temp->next;
     }
     getch();
     clrscr();
}

void dele()
{
	temp=f;
	if(temp==NULL)
	  {
		cout<<"\n\t QUEUE IS EMPTY! "<<endl;
	  }
	else
	  {
		temp=f;
		f=f->next;
		cout<<"\n\t deleted ele is "<<temp->roll<<" "<<temp->name<<endl;
		free(temp);
	  }
	  getch();
	  clrscr();
}