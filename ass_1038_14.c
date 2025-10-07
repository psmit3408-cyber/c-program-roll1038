//14.find the smallest of three numbers

#include <stdio.h>
int main() 
{
    int  i;
    int num[100], min;

    printf("Enter a numbers: ");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }

    min = num[0]; 

    for(i = 1; i < 3; i++) 
    {
        if(num[i] < min)
            min = num[i];
    }

    printf("Smallest number = %d", min);
    return 0;
}


