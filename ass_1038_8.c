//8.compute the LCM of two numbers

#include<stdio.h>
int main ()
{
  int no1,no2,max,i,lcm;
  printf ("enter a two element->\n");
  scanf ("%d %d",&no1,&no2);
  
  max=(no1>no2) ? no1:no2;
  for(i=max; ;i++)
  {
     if(i%no1 == 0 && i%no2 == 0)
     {
        lcm=i;
        break;
     }
  }
     printf ("LCM of %d and %d is %d\n",no1,no2,lcm);
   return 0;
}


