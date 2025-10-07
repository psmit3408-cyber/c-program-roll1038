//15.find the largest of four numbers

#include <stdio.h>
int main() 
{
    int num[5], i, max;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) 
   {
        scanf("%d", &num[i]);
    }

    max = num[0];  
    for(i = 1; i < 5; i++)  
   {
        if(num[i] > max)
            max = num[i];
    }

    printf("Largest number = %d", max);
    return 0;
}


