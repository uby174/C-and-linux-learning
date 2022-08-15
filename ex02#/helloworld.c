#include <stdio.h>
#include <string.h>

int main (){
 
    char s[100];

   printf("Enter a string to reverse\n");
   fgets(s,100,stdin);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}