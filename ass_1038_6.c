//6.compute the product of element in a 1D array

#include<stdio.h>
int main ()
{
    int n,i;
    int arr[100];
    long long product =1;
    printf ("enter a  number of elements->");
    scanf ("%d",&n);
    
    printf ("enter %d element:\n",n);
    for(i=0;i<n;i++)
    {
       scanf ("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       product = product * arr[i];
    }
    printf ("product of all element =%lld",product);
    return 0;
}

