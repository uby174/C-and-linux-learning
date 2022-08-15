/*prompt for integer input
for values 1,2 or 3 display the words "red","green",or "blue".
flag invalid input */
#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  switch (a)
  {
  case 1 :
  puts("red \n");
    break;

  case 2:
  puts("green \n");
    break;

  case 3:
  puts("blue \n");    
    break;

    default:
  puts("invalid input");
    break;
  }




}