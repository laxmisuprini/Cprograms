#include<stdio.h>
#include<time.h>

void swap(int*x,int*y)
{
int temp=*x;
    *x=*y;
    *y=temp;
}

int part(int a[],int l,int h)
{
 int j;
    int pivot = a[h];    // pivot
    int i = (l - 1);  // Index of smaller element
 
    for (j = l; j <= h- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (a[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[h]);
    return (i + 1);
} 
void quicksort(int a[],int l,int h)
{
 int s;
 if(l<h)
   {
    s=part(a,l,h);
    quicksort(a,l,s-1);
    quicksort(a,s+1,h);
   }
} 

void main()
{
 int i,a[10000],n,r,l,h;
 clock_t start,end;
 double time_taken;
 
 printf("enter the size\n");
 scanf("%d",&n);
 
 /*for(i=0; i<n; i++)
 {
  r=rand();
  a[i]=r;
 }*/
printf("enter the nos\n");
for(i=0; i<n; i++)
 {
  scanf("%d",&a[i]);
 }
printf("\n before sorting");
for(i=0; i<n; i++)
 {
  printf("%d\n",a[i]);
 }
 l=0;
 h=n-1;
start=clock();
 quicksort(a,l,h);
end= clock();

printf("\n after sorting\n");
for(i=0; i<n; i++)
 {
  printf("%d\n",a[i]);
 } 

time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("\n%lf",time_taken);


}
  

