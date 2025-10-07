
//5.print the first N natural numbers in reverse

#include<stdio.h>
int  main ()
{ 
   int n,i;
   printf ("enter a number->");
   scanf ("%d",&n);
   
   for(i=n;i>=0;i--)
   {
       printf ("\n%d",i);
   }
   return 0;
}

