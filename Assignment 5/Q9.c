#include <stdio.h>
#include <string.h>
void main()
{
   char str[] = {'a', 'b', 'c'}, str2[] = {'a', 'b', 'c', '\0'};
   ;
   if (strcmp(str, str2) == 0)
   {
      printf("The string are equal");
   }
   else
      printf("The strings are not equal");
}