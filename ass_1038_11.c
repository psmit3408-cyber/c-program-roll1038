//11.check whether a number is strong

#include<stdio.h>
int main ()
{
   int num,temp,rem,fact,sum=0,i;
   printf ("enter a number ->");
   scanf ("%d",&num);
   temp = num;
   for (; num > 0; num = num / 10)
   {
      rem=num % 10;
      fact=1;
      for (i = 1; i <= rem; i++)
      {
            fact = fact * i;
      }
      sum = sum + fact; 
   }
   if (sum == temp)
   {
        printf("%d is a Strong number.\n", temp);
   }
    else
    {
        printf("%d is not a Strong number.\n", temp);
    }

   return 0;
}

