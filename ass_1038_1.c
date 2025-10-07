1.find the smallest of four number

#include<stdio.h>
int main ()
{
    int a,b,c,d,small;
    printf ("enter a number->");
    scanf("%d",&a);
    printf ("enter a number->");
    scanf("%d",&b);
    printf ("enter a number->");
    scanf("%d",&c);
    printf ("enter a number->");
    scanf("%d",&d);
    small=a;
    if(b< small)
       small=b;
    if(c<small)
       small=c;
    if(d<small)
       small=d;
       
    printf ("the small number is %d",small);
    return 0;
}

