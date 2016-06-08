# project187
#include<stdio.h>

int main()
{
 int a[20];
 int n,i,j=0,m,sm;
 
 printf("Enter number of elements\n");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 m=a[0];
 for(i=1;i<n;i++)
 {
  if(m>a[i])
  {
   m=a[i];
   j=i;
  }
 }
 sm=a[n-j-1];
 for(i=1;i<n;i++)
 {
  if(sm>a[i] && j!=i)
  sm=a[i];
 }
 printf("Second smallest element: %d", sm);
return 0;
}
