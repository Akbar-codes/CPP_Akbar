#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
     int rn;float marks1;char name1[20];

     class student
     {

      int roll;
      char name[20];
      float marks;
      public:
	void getdata()
	{
	  cout<<"\n enter roll : ";
	  cin>>roll;
	  cout<<"\n enter name : ";
	  gets(name);
	  cout<<"\n enter marks : ";
	  cin>>marks;
	}

	void putdata()
	{
	  cout<<"\n the changed data is : ";
	  cout<<roll<<"   "<<name<<"   "<<marks;
	}

	void mdata()
	{
	  cout<<"\n name to be changed "<<name;
	  gets(name1);
	  strcpy(name,name1);
	  cout<<"\n marks to be changed "<<marks;
	  cin>>marks1;
	  marks=marks1;
	}
	int rolln()
	{
	  return roll;
	}
     };
void main()
{
     clrscr();
     char fname[30];
     student stud;
     int n;
     ofstream fout;
     ifstream fin;
     cout<<"\n enter name of the file : ";
     gets(fname);
     cout<<"\n enter no of records : ";
     cin>>n;
     fout.open(fname,ios::out|ios::binary);
     for(int i=0;i<n;i++)
     {
	stud.getdata();
	fout.write( (char*)&stud, sizeof(stud) );
     }
     fout.seekp(0);
     cout<<"\n enter rollno to be searched : ";
     cin>>rn;
     fin.open(fname,ios::in|ios::binary);
     fin.read( (char*)&stud, sizeof(stud) );
     fin.seekg(0);

     while(!fin.eof() )
     {
     fin.read( (char*)&stud, sizeof(stud) );
     if(stud.rolln() == rn)
	{
	  int pos;
	  pos=fin.tellg() ;
	  fout.seekp( pos-sizeof(stud) );
	  stud.mdata();
	  fin.read( (char*)&stud, sizeof(stud) );
	  stud.putdata();
	}
     }
     getch();
}