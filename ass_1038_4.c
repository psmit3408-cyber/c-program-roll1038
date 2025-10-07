4.calculate the perimeter of a rectangle

#include<stdio.h>
int main ()
{
    float length,breath,perimeter;
    printf ("enter a length->");
    scanf ("%f",&length);
    printf ("enter a breath->");
    scanf ("%f",&breath);
    
    perimeter =2*(length+breath);
    
    printf ("perimeter of a rectagle = %f",perimeter);
    return 0;
}


