#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
class VowelWord
{ private: char str[100];
	   int freq;
  public: VowelWord()
	  { freq=0;
	    strcpy(str,'\0');
	  }
	  void readstr();
	  void freqvowel();
	  void display();
}obj;

void VowelWord::readstr()
{ cout<<"Enter a sentence,with each word separated by a single blank space and ending in a full stop:"<<endl;
  gets(str);
  getch();
}
void VowelWord::freqvowel()
{ for(int i=0;str[i]!='\0';i++)
  { if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'||str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
    { if((str[i-1]==' '|| i==0) && str[i+1]!=' ')
      { freq++; }
    }
  }
}
void VowelWord::display()
{ cout<<"Given sentence:"<<endl<<str<<endl<<"Frequency of words begining with a vowel:"<<freq<<endl;
  getch();
}

void main()
{ clrscr();
  int choice,a=1;
 do
 {
  cout<<"Enter a choice based on the folowing menu:"<<endl<<"1. Enter a sentence"<<endl<<"2. Count the frequency"<<endl<<"3. Display"<<endl<<"4. Exit"<<endl;
  cin>>choice;
  switch(choice)
  { case 1: clrscr();
	    obj.readstr();
	    clrscr();
	    break;
    case 2: obj.freqvowel();
	    clrscr();
	    break;
    case 3: clrscr();
	    obj.display();
	    clrscr();
	    break;
    case 4: getch();
	    exit(0);
    default:cout<<"Wrong choice."<<endl;
	    break;
  }
 }while(a);
  getch();
}