#include <stdio.h>

int main()
{
   int a ,b,c;
   printf(" enter a:");
   scanf("%d",&a);
   printf("enter b:");
   scanf("%d",&b);

   c=(a>b)? a:b;//this statement checks the condition, if true then a else b 
   printf("%d is greater in %d and %d \n",c,a,b);
   printf("%d- %s \n",a,(a%2) ? "odd":"even"); // check the condition if true 
   printf("%d- %s \n",b,(b%2) ?"odd":"even");

}