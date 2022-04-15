#include<iostream.h>
#include<conio.h>
void Rev(int arr[], int n);
void main()
{
     clrscr();
     int n,arr[10];
     cout<<"\n\t\t Enter array  size : ";
     cin>>n;
     cout<<"\n\t\t Enter array       : ";
     for(int i=0;i<n;i++)    {cin>>arr[i];}
     Rev(arr,n);
     getch();
}
void Rev(int arr[], int n);
void Rev(int arr[], int n)
{
	for(int i=n;i>=0;i--)
	cout<<arr[i]<<" ";
}