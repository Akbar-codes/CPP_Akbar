//bubble sort
#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int arr[11],n,i,j,temp,x,j1;
     cout<<"\n\t\t\t PROGRAM OF BUBBLE SORT ";cout<<endl;
     cout<<"\n\t Enter no of array : ";
     cin>>n;//bubble sort.
     cout<<"\n\t Enter the elements : ";
     for(i=0;i<n;++i)cin>>arr[i];
     for(i=0;i<n;++i)
	{
		for(j=0;j<(n-1);++j)
		   {
			if( arr[j]>arr[j+1] )
			  {
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
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