//10.Add two matrices

#include<stdio.h>
#include<stdio.h>
int main ()
{
   int a[2][2]={{5,3},{2,6}};
   int b[2][2]={{5,2},{8,6}};
   int c[2][2];
   int i,j;
   for(i=0;i<2;i++)
   { 
      for(j=0;j<2;j++)
      {
         c[i][j]= a[i][j] + b[i][j];
      }
   }
   printf("sum of two matrix\n");
   for(i=0; i<2; i++)
   {
      for(j=0; j<2; j++)
      {
         printf ("%d ",c[i][j]);
      }
      printf ("\n");
   }
   return 0;
}

