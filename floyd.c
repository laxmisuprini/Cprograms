#include<stdio.h>
int min(int a, int b)
{
 if(a<b)
 return a;
 else 
  return b;
}
void floyd(int d[10][10],int n)
{
 int i,j,k;
 for(k=1; k<=n; k++)
 { 
  for(i=1; i<=n; i++)
  {
   for(j=1; j<=n; j++)
   {
    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
   }
  }
 }
}

void main()
{
 int d[10][10],i,j,n;
 
 printf("enter the no of vertices\n");
 scanf("%d",&n);
 printf("\n enter the shortest path matrix\n");
 
 for(i=1; i<=n; i++)
  {
   for(j=1; j<=n; j++)
   {
    scanf("%d",&d[i][j]);
   }
  }
 
floyd(d,n);

 printf("\n the shortest path matrix is given as\n");
 
  for(i=1; i<=n; i++)
{
 for(j=1;j<=n; j++)
 {
  printf("%d\t",d[i][j]);
  
 }printf("\n");
}

}
