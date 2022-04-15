//deletion sort
#include<iostream.h>
#include<conio.h>
#include<process.h>
int Lsearch(int [], int,int);// to find position for new element.
void main()
{
     clrscr();
     int arr[50],n,item,i,index;
     cout<<"\n\t\t\t PROGRAM OF DELETION SORT ";cout<<endl;
     cout<<"\n\t Enter no of array(max 50) : ";
     cin>>n;//deletion sort.
     cout<<"\n\t Enter the elements (must be in ascending order) : ";
     for(i=0;i<n;++i)cin>>arr[i];
     char ch='y';//for while loop.
     while(ch=='y'||ch=='Y')
	{
		cout<<"\n\t Enter element to be deleted...";
		cin>>item;
		if(n==0)
		  {
			cout<<"EMPTY!\n";exit(1);
		  }
		index=Lsearch(arr, n, item);      //function call.
		if(index!=-1)
			arr[index]=0;
		else
			cout<<"\n\t SORRY! NO SUCH ELE IN ARRAY.\n";
		//display.
     cout<<"\n\t\t\t The array now is as shown below...\n "<<endl;
     for(i=0;i<n;i++)
	 cout<<arr[i]<<" ";
     cout<<"\n\t\t\t Zero (0) means deleted ele \n";
     for(i=index;i<n;++i)
	{
		arr[i]=arr[i+1];//shift ele, bringing empty space to end.
	}
     n-=1;//no of ele updated.
     cout<<"\n\t Want to delete more ele?(y/n) : ";cin>>ch;
     }
     cout<<"\n\t The array after shifting empty space is..\n";
     for(i=0;i<n;i++)
	 cout<<arr[i]<<" ";
     getch();
}

/////////////////////////////////////////////////////////////////////////////
////////////////////SEARCH POSITION OF NEW ELEMENT////////////////////////
/////////////////////////////////////////////////////////////////////////////

int Lsearch(int arr[], int size, int item)
{                         //linear size.
	int i;
	for(i=0;i<size;++i)
	    {
		if(arr[i]==item) return i;//break;
	    }
	return -1;//control reaches here if item is not found.
}