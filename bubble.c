#include<stdio.h>
#include<time.h>
void main()
{
 clock_t start,end;
 double total_time;
 int n,a[100000],temp,i,j,r;
 printf("enter the number elements to be sorted\n");
 scanf("%d",&n);

 for(i=n; i>=1; i--)
 {
 
  a[n-i]=i;
 // scanf("%d",&a[i]);
 }
 /*printf("the numbers before sorting\n");
 for(i=0; i<n; i++)
{
 printf("\n%d",a[i]);
}*/

start=clock();
 for(i=0; i<n-1; i++)
{
  for (j=0; j<n-i-1; j++)
  {
   if(a[j]>a[j+1])
   {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
   }
  }
}

end=clock();

printf("the array after sorting\n");
for(i=0; i<n; i++)
 {
  printf("\n%d",a[i]);
 }


total_time=((double)(end-start))/CLOCKS_PER_SEC;
printf("\n%lf",total_time);


}
 



