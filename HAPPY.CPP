#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class happy
{ private: int N;
  public:  happy()
	   { N=0; }
	   void getnum(int n);
	   int sum_sq_digits(int x);
	   void ishappy();
}obj;
void happy::getnum(int n)
{ N=n; }
int happy::sum_sq_digits(int a)
{ int sum=0,t=0;
  while(a)
  { t=a%10;
    sum+=t*t;
    a=a/10;
  }
  return sum;
}
void happy::ishappy()
{ int a,b;
  a=b=N;
 do
 {
  a=sum_sq_digits(a);
  b=sum_sq_digits(b);
  b=sum_sq_digits(b);
 }while(a!=b && a!=N && b!=N);
 if(a==1)
 { cout<<"Number "<<N<<" is happy."<<endl;
 }
 else { cout<<"Number "<<N<<" is not happy."<<endl; }
}

void main()
{ clrscr();
  int choice,a=1,n;
  do
 {clrscr();
  cout<<"Enter choice based on the following menu:"<<endl<<"1. Enter a number"<<endl<<"2. Check for happy number"<<endl<<"3. Exit"<<endl;
  cin>>choice;
  switch(choice)
  { case 1: clrscr();
	    cout<<"Enter a number:"<<endl;
	    cin>>n;
	    obj.getnum(n);
	    break;
    case 2: clrscr();
	    obj.ishappy();
	    getch();
	    break;
    case 3: getch();
	    exit(0);
    default:cout<<"Wrong choice."<<endl;
  }
 }while(a);
 getch();
}