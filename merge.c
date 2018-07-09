#include<stdio.h>
#include<time.h>

void merge(int a[],int low,int mid,int high)
{
 int b[100],i,j,k;
 
 for(i=low; i<=high; i++)
 {
  b[i]=a[i];
 }
 i=low;
 j=mid+1;
 k=low;
 while(i<=mid && j<=high)
{
 if(b[i]<=b[j])
 {
  a[k++]=b[i++];
 }
 else
  a[k++]=b[j++];
 }
while(i<=mid)
{
 a[k++]=b[i++];
}

} 
 

void mergesort(int a[],int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  mergesort(a,low,mid);
  mergesort(a,mid+1,high);
  merge(a,low,mid,high);
 }
}



void main()
{
 int low,high,n,a[100],i,r;
 clock_t start,end;
 double time_taken;
 
 
 printf("\nenter the size");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
  r=rand();
  a[i]=r;
 }
low=0;
high=n-1;

start=clock();
mergesort(a,low,high);

end=clock();
 for(i=0; i<n; i++)
 {
  printf("%d\n",a[i]);
 }

time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("\n%lf",time_taken);



}

 
