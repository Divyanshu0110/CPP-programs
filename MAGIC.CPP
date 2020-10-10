#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ clrscr();
  int sq[20][20],i,j,m,n,choice;
  int flag=0;
  do
 {clrscr();
  cout<<"Enter choice based on the following menu:"<<endl<<"1. Enter a 2D array"<<endl<<"2. Check for magic square"<<endl<<"3. Exit"<<endl;
  cin>>choice;
  switch(choice)
  { case 1: clrscr();
	    cout<<"Enter no. of rows:"<<endl;
	    cin>>m;
	    cout<<"Enter no. of columns:"<<endl;
	    cin>>n;
	    for(i=0;i<m;i++)
	    { for(j=0;j<n;j++)
	     { cout<<"Enter element:"<<endl;
	       cin>>sq[i][j];
	     }
	    }
	    getch();
	    break;
    case 2: int sum_d=0,sum_c=0,sum_r=0;
	    if(m!=n)
	    { flag++; }
	    else
	    {
	     for(i=0,sum_d=0;i<m;i++) //for diagonal 1
	     { sum_d+=sq[i][i]; }
	     for(i=0;i<m;i++) //for columns
	     { sum_c=0;
	       for(j=0;j<n;j++)
	       { sum_c+=sq[i][j]; }
	       if(sum_c!=sum_d)
	       { flag++; }
	     }
	     for(i=0;i<m;i++) //for rows
	     { sum_r=0;
	       for(j=0;j<n;j++)
	       { sum_r+=sq[j][i]; }
	       if(sum_r!=sum_d)
	       { flag++; }
	     }
	    }
	     if(flag==0)
	     { cout<<"The given array forms a magic square."<<endl; }
	     else { cout<<"The given array does not form a magic square."<<endl; }
	     getch();
	     break;
     case 3: getch();
	     exit(0);
     default:cout<<"Wrong choice."<<endl;
   }
 }while(choice);
getch();
}
