//3.concatenate two strings

#include<stdio.h>
#include<string.h>
int main ()
{
   char str1[10]="hello ";
   char str2[10]="world";
   strcat(str1,str2);
   printf ("concatenate string:%s",str1);
   return 0;
}

