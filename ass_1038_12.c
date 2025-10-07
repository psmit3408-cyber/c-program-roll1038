//12.Compare lengths of two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] ,str2[20];
    printf ("enter a string->");
    scanf("%s",str1);
    printf ("enter a string->");
    scanf("%s",str2);
    
    if(strcmp(str1, str2) > 0)
    {
        printf("%s is greater than %s\n", str1, str2);
    }
    else if(strcmp(str1, str2) < 0)
    {
        printf("%s is smaller than %s\n", str2, str1);
    }
    else 
    {
       printf ("both are equal");
    }
    

    return 0;
}

