#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int roll1; char name1[10];
class student{
		int roll;
		char name[10];
	     public:
		void getdata()
		{
			cout<<"\n\t Enter roll : ";
			cin>>roll;
			cout<<"\n\t Enter name : ";
			gets(name);
		}
		void putdata()
		{
			cout<<"\n\t ROLL : "<<roll;
			cout<<"\n\t NAME : "<<name;
		}
		void mdata()
		{
			cout<<"\n\t Enter new roll : ";
			cin>>roll1;
			cout<<"\n\t Enter new name : ";
			gets(name1);
			roll=roll1;
			strcpy(name,name1);
		}
		int Roll()
		{
		    return roll;
		}
	     };

void main()
{
     clrscr();
     char fname[10];
     int n;
     student stu;
     cout<<"\n\n\t\t\t SEARCHING IN FILE HANDLING PRGS ";
     cout<<"\n\n\n\t Enter file name : ";
     gets(fname);
     cout<<"\n\t How many records? : ";
     cin>>n;
     fstream fin;
     fin.open(fname,ios::in|ios::out|ios::binary);
     for(int i=0;i<n;++i)
     {
	stu.getdata();
	fin.write( (char*)&stu, sizeof(stu) );
     }
     fin.seekp(0);int r;char found = 'n';
     clrscr();
     cout<<"\n\t Enter roll to be searched : ";
     cin>>r;
     for(i=0;i<n;++i)
     {
	fin.read( (char*)&stu, sizeof(stu) );
		if(r==stu.Roll() )
		  {
		    stu.mdata();
		    cout<<"\n\t Record found. Details are : ";
		    stu.putdata();
		    found='y';
		    break;
		  }
     }
     fin.seekp(0);
     if(found=='n')
		cout<<"\n\t Record not found. ";
     getch();
}