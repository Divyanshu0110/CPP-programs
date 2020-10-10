#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
char* concat(char s1[20],char s2[20])
{ char s3[40],k=0,i;
  for(i=0;s1[i]!='\0';i++)
  { s3[k++]=s1[i];
  }
  for(i=0;s2[i]!='\0';i++)
  { s3[k++]=s2[i];
  }
  s3[k]='\0';
  return s3;
}
int substring(char s1[20],char s2[20])
{ int i,m=0,s=0,x=0,j,k;
  for(i=0;s1[i]!='\0';i++);
  m=i-1;
  for(i=0;s2[i]!='\0';i++);
  s=i-1;
  if(m<=s)
  { cout<<"Invalid length of substring."<<endl;
    getch();
    return 0;
  }
  for(i=0;i<m;i++)
  { if(s1[i]==s2[0])
    {
     for(j=i+1,k=1;s1[j]==s2[k] && s2[k]!='\0';j++,k++);
     if(s2[k]=='\0')
     { cout<<"Substring fount at "<<i+1<<" position."<<endl;
       x=1;
       return i;
     }
    }
  }
  if(x==0)
  { cout<<"It is not a substring."<<endl;
    return 0;
  }
}
char* del(char s1[20],char s2[20],int index)
{  int l=0,j,k=0;
   char temp[20];
   for(j=0;s2[j]!='\0';j++);
   l=j-1;
   for(int i=0;s1[i]!='\0';i++)
   { if(i==index)
     { while(l!=0)
       { i++; l--; }
     }
   else { temp[k++]=s1[i]; }
   }
   temp[k]='\0';
   return temp;
}

void main()
{ clrscr();
  char s1[20],s2[20],s3[40];
  int choice,index,x;
  do
  { clrscr();
    cout<<"Enter choice based on the following menu:"<<endl<<"1.Enter data"<<endl<<"2.Concat two strings"<<endl<<"3.Check for substring"<<endl<<"4.Delete the substring"<<endl<<"5.Exit"<<endl;
    cin>>choice;
    switch(choice)
    { case 1: cout<<"Enter main string:"<<endl;
	      gets(s1);
	      cout<<"Enter sub string:"<<endl;
	      gets(s2);
	      break;
      case 2: strcpy(s3,concat(s1,s2));
	      cout<<"String after concatenation:";
	      for(int m=0;s3[m]!='\0';m++)
	      { cout<<s3[m]; }
	      break;
      case 3: x=substring(s1,s2);
	      if(x==1)
              { index=x; }
              else { index=-1; }
              break;
      case 4: strcpy(s1,del(s1,s2,index));
	      cout<<"Main string after removal of substring:";
	      for(int h=0;s1[h]!='\0';h++)
	      { cout<<s1[h]; }
	      break;
      case 5: getch();
	      return;
    default:cout<<"Wrong choice."<<endl;
    }
    getch();
  }while(choice);
}