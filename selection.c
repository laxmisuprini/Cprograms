#include<stdio.h>

#include<time.h>

void main()
{
 int n,a[10000],min,j,temp,i;
 printf("\nenter the value of n\n");
 scanf("%d",&n);
 
 for(i=n; i>=1; i--)
{
   a[n-i]=i;
}


clock_t start,end;
double time_taken;
start=clock();
for(i=0; i<n-1; i++)
{
 min=i;
 for(j=i+1; j<n; j++)
 {if(a[j]<a[min])
   { 
    min=j;
     }
     temp=a[i];
     a[i]=min;
     min=temp;
   }
}
end=clock();
time_taken=((double)(end-start))/CLOCKS_PER_SEC;


for(i=0; i<n; i++)
 {
  printf("%d",a[i]);
 }

printf("\n%lf\n",time_taken);

}

     

 
