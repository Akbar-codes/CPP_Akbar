//insertion sort
#include<iostream.h>
#include<conio.h>
#include<process.h>
int Finpos(int [], int,int);// to find position for new element.
void main()
{
     clrscr();
     int arr[50],n,item,i,index;
     cout<<"\n\t\t\t PROGRAM OF INSERTION SORT ";cout<<endl;
     cout<<"\n\t Enter no of array(max 50) : ";
     cin>>n;//insertion sort.
     cout<<"\n\t Enter the elements (must be in ascending order) : ";
     for(i=0;i<n;++i)cin>>arr[i];
     char ch='y';//for while loop.
     while(ch=='y'||ch=='Y')
	{
		cout<<"\n\t Enter element to be inserted...";
		cin>>item;
		if(n==50)
		  {
			cout<<"OVERFLOW!\n";exit(1);
		  }
		index=Finpos(arr, n, item);
		for(i=n;i>index;i--) //shift ele to make room.
		   {
			arr[i]=arr[i-1];
		   }
		arr[index]=item;//item inserted.
		n+=1;//no of elements updated.
		cout<<"\n Want to enter more?(y/n)... ";
		cin>>ch;
	}
	//display.
     cout<<"\n\t\t\t The array now is as shown below...\n "<<endl;
     for(i=0;i<n;++i)
     cout<<"  "<<arr[i]<<"  ";
     cout<<endl;
     getch();
}

/////////////////////////////////////////////////////////////////////////////
////////////////////DETERMINE POSITION OF NEW ELEMENT////////////////////////
/////////////////////////////////////////////////////////////////////////////

int Finpos(int arr[], int size, int item)
{
    int pos,i;
    if(item<arr[0])      {      pos=0; }

    else                 {
				for(i=0;i<size-1;++i)
				   {
					if(arr[i]<=item&& item<=arr[i+1])
					  { pos=i+1;break; }
				   }
				if(i==size-1)
				pos=size;
			 }
    return pos;
}