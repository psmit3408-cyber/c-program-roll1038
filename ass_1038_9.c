//9.convert a string to lowercase

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[50] = "HELLO WORLD";
    int i;

    for(i = 0; str[i]; i++) 
    {
        str[i] = tolower(str[i]); 
    }

    printf("Lowercase string: %s", str);

    return 0;
}


