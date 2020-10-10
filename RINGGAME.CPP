#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class ringgame
{ private: int ring[11],max,upper;
  public:  ringgame(int m)
	   { max=m;
	     upper=1;
	   }
	   void jump_in();
	   void jump_out();
}obj(0);
void ringgame::jump_in()
{  if(max<10)
   { ring[max++]=1;
     cout<<"Remaining vacancies in the column:"<<10-max<<endl;
   }
   else { cout<<"Column full, start removing rings."<<endl; }
   getch();
}

void ringgame::jump_out()
{ if(max!=0)
  { ring[max--]=0;
    cout<<"Remaining vacancies in the column:"<<10-max<<endl;
  }
  else { cout<<"Congratulations! The game is over."<<endl; }
  getch();
}

void main()
{ clrscr();
  int choice,a=1;
 do
 {
  cout<<"Enter choice based on the folowing menu:"<<endl<<"1. Add rings"<<endl<<"2. Remove rings"<<endl<<"3. End Game"<<endl;
  cin>>choice;
  switch(choice)
  { case 1: obj.jump_in();
	    clrscr();
	    break;
    case 2: obj.jump_out();
	    clrscr();
	    break;
    case 3: getch();
	    exit(0);
    default:cout<<"Wrong choice."<<endl;
	    getch();
	    clrscr();
  }
 }while(a);
 getch();
}