#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>


using namespace std;

int main()
{
int x,m,p,y,q,i,j,k,z;x=0;

cout<<"ENTER THE NUMBER";
cin>>z;
q=z;
p=z;
y=z;
m=z-1;
y=y+m;

for(i=1;i<=y;i++)
{
if(i==1)
x=x+i;
if(i>1 && i<=q)
x=x+2;
if(i>q)
x=x-2;

  for(j=1;j<=y;j++)
  {
  if(j!=z)
  {
   cout<<" ";
   }
   else
   {
   for(k=1;k<=x;k++)
   {
   cout<<"*";
   j++;
   }
   j--;
   }
    }
   cout<<"\n";
   if(i<p)
   z--;
   else
   z++;
   }
   getch();
   return 0;
   }
