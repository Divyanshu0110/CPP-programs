#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
class piglatin
{ private: char txt[20];
	   int len;
  public:  piglatin()
	   { strcpy(txt,'\0');
	     len=0;
	   }
	   void readstring();
	   void convert();
	   void consonant();
}obj;

void piglatin::readstring()
{ char word[20];
  int i;
  cout<<"Enter a word in UPPERCASE:"<<endl;
  gets(word);
  for(i=0;word[i]!='\0';i++)
  { if(word[i]>='a' && word[i]<='z')
    { word[i]-=32;
    }
  }
  len=i;
  strcpy(txt,word);
}

void piglatin::convert()
{ int i,k=0,a,l=len;
  char temp[20];
  if(txt[0]=='A'|| txt[0]=='E'|| txt[0]=='I'|| txt[0]=='O'|| txt[0]=='U')
  {   }
  else
  {
   for(i=0;txt[i]!='\0';i++)
   { if(txt[i]=='A'|| txt[i]=='E'|| txt[i]=='I'|| txt[i]=='O'|| txt[i]=='U')
     { a=i;
       break;
     }
     else
     { temp[--l]=txt[i]; }
   }
   for(i=a;txt[i]!='\0';i++)
   { temp[k++]=txt[i]; }
   temp[len]='A';
   temp[len+1]='Y';
   temp[len+2]='\0';
  }
 cout<<"Translation in piglatin form of "<<txt<<" is:"<<temp<<endl;
}

void piglatin::consonant()
{ int count=0,i;
  for(i=0;txt[i]!='\0';i++)
  { if(txt[i]!='A'&& txt[i]!='E'&& txt[i]!='I'&& txt[i]!='O'&& txt[i]!='U')
    { count++;
    }
  }
  cout<<"No. of consonants in "<<txt<<" are:"<<count<<endl;
}

void main()
{ clrscr();
  int choice;
  char ch;
 do
 {clrscr();
  cout<<"Enter a choice based on the following menu:"<<endl<<"1. Enter a word"<<endl<<"2. Convert in piglatin form"<<endl<<"3. Count consonants"<<endl<<"4. Exit"<<endl;
  cin>>choice;
  switch(choice)
  { case 1: clrscr();
	    obj.readstring();
	    break;
    case 2: clrscr();
	    obj.convert();
	    break;
    case 3: clrscr();
	    obj.consonant();
	    break;
    case 4: getch();
	    exit(0);
    default:cout<<"Wrong choice:"<<endl;
  }
  cout<<"Do you want to search again?(Y/N)"<<endl;
  cin>>ch;
 }while(ch=='y' || ch=='Y');
 getch();
}