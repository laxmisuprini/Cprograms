#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int table[128];

void shifttable(char pattern[])
{
 int i,j,m;
 m=strlen(pattern);
 for(i=0;i<128; i++)
 {
  table[i]=m;
 }
 for(j=0; j<m-1; j++)
 {
  table[pattern[j]]=m-1-j;
 }
}

int horspool(char pattern[],char text[])
{
 int i,k,m,n;
 shifttable(pattern);
 m=strlen(pattern);
 n=strlen(text);
 i=m-1;
 while(i<n)
{
 k=0;
 while(k<m && text[i-k]==pattern[m-1-k])
 
  k++;
  
  if(k==m)
    return (i-m+1);
  else
    i+=table[text[i]];
 
}
return -1;
}


void main()
{
 char pattern[90], text[100];
 int n,pos;

 printf("\nenter the text");
 scanf("%s",text);
 printf("\n enter th pattern to be matched");
 scanf("%s",pattern);
 pos=horspool(pattern,text);
 
 if(pos<0)
  printf("\nthe pattern is not matched");
 else
  printf("\nthe pattern is matched and the position is :%d",pos+1);
}


