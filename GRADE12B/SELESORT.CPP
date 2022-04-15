//selection sort
#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int arr[11],n,i,j,temp,x,j1;
     cout<<"\n\t\t\t PROGRAM OF SELECTION SORT ";cout<<endl;
     cout<<"\n\t Enter no of array : ";
     cin>>n;//selection sort.
     cout<<"\n\t Enter the elements : ";
     for(i=0;i<n;++i)cin>>arr[i];
     for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		   {
			if( arr[i]>arr[j] )
			  {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			  }
		   }
		cout<<"\n";
		cout<<"\n array after "<<i+1<<" pass ";
		for(j=0;j<n;++j)
		cout<<arr[j]<<" ";
	}
	//display.
     cout<<"\n\t\t\t Sorted array is "<<endl;
     for(i=0;i<n;++i)
     cout<<"  "<<arr[i]<<"  ";
     getch();
}