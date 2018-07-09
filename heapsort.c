#include<stdio.h>
#include<time.h>>
#include<math.h>
int h[50];
void heapify(int h[ ],int n)
{
 int i,j,n1,k,heap,v;
  n1=n;
for(i=n1/2; i>=1; i++)
{
 k=i;
 v=h[k];
 heap=0;
 while(!(heap)&&(2*k)<=n1)
 {
   j=2*k;
   if(h[j]<h[j++])
       j+=1;
   if(v>=h[j])
       heap=1;
   else
   {
     h[k]=h[j];
     k=j;
   }
 }
h[k]=v;
}
}
void main()
{
 int i,n,size,t;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=1; i<=n; i++)
   scanf("%d",&h[i]);
heapify(h,n);

printf("elements heapified are\n");

for(i=1; i<=n; i++)
   printf("%d",h[i]);

for(i=n; i>=1; i--)
{
  t=h[1];
  h[1]=h[i];
  h[i]=t;
  size=i-1;
  heapify(h,size);
}
printf("rotated elements arre\n");

 for(i=1; i<=n; i++)
   printf("\t %d",h[i]);
}
