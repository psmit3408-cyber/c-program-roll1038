2.print the first N natural number

#include<stdio.h>
int main ()
{
    int n,i;
    printf ("enter the value->");
    scanf ("%d",&n);
    
    printf ("first natural number");
    
    for (i=1;i<=n;i++)
    {
       printf ("\n%d",i);
    }
}


