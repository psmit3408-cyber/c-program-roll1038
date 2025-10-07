
//7.compute the sum of element in a 1D array

#include<stdio.h>
int main ()
{
   int n,i,sum=0;
   int arr[n];
   printf ("enter a element->");
   scanf ("%d",&n);
   printf ("enter %d elemnet ->\n",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
      sum = sum + arr[i];
   }
   
   printf ("sum= %d\n",sum);
   return 0;
}
