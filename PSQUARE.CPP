0#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
class perfect
{  private: int n;
   public:
   perfect()
   { n=0; }
   perfect(int a)
   { n=a; }
   void perfect_sq();
   void sum_of();
}obj;
void perfect::perfect_sq()
{ int i,p;
  double root,a;
  cout<<"Perfect squares after "<<n<<" are:"<<endl;
  for(p=0,i=5;i>=1;p++)
  {  a=n+p;
     root=sqrt(a);
     if(root==floor(root))
     { cout<<a<<" ";
       i--;
     }
  }
  getch();
}
void perfect::sum_of()
{ int i,sum=0,p,n=15,a=0;
  cout<<"Consecutive numbers whose sum equals "<<n<<":"<<endl;
  for(i=1;i<n;i++,a++)
  { sum=0;
    p=i;
   while(a)
   { sum+=p;
     p++;
     if(sum==n)
     { a=0;
       for(a=i;a<p;a++)
       { cout<<a<<" "; }
       a=0;
       cout<<endl;
     }
     if(sum>n)
     { a=0; }
   }
 }
 getch();
}
void main()
{ clrscr();
  int N=0,choice;
  char ch;
 do
 { clrscr();
  cout<<"Enter choice based on the following menu:"<<endl<<"1. Enter a number"<<endl<<"2. Find 5 perfect squares after "<<N<<endl<<"3. Find consecutive numbers whose sum equals "<<N<<endl<<"4. Exit"<<endl;
  cin>>choice;
  switch(choice)
  { case 1: clrscr();
	    cout<<"Enter a number:"<<endl;
	    cin>>N;
	    perfect obj(N);
	    break;
    case 2: clrscr();
	    obj.perfect_sq();
	    break;
    case 3: clrscr();
	    obj.sum_of();
	    break;
    case 4: getch();
	    exit(0);
    default:cout<<"Wrong choice."<<endl;
  }
  cout<<endl<<"Do you want to search again?(Y/N)"<<endl;
  cin>>ch;
 }while(ch=='y' || ch=='Y');
 getch();
}