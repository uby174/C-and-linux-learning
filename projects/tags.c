/* following program check the input Tag to the condition given 
Tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not.
tag= DDXDDD-DD where D is a integer and X is a character*/

#include <stdio.h>

int main(){
char vowel[]={'A','E','I','O','U','\0'};
char tag [10];
int c1=0; //setting condition 1 to zero
int c2=0; //setting condition 2 to zero
scanf("%s",tag);
for(int x=0; x<6 ; x++ ) // checking the character for vowel
{
  if(tag[2]==vowel[x]) // checking if the character in tag is vowel
   c1=1;
}
for(int y=0; y<10 ; y++) // running the loop for each character in tag
{
   if((tag[0]+tag[1])%2==0 && (tag[3]+tag[4])%2==0 &&    ( tag[4]+tag[5])%2==0 && (tag[7]+tag[8])%2==0)
        c2=1; 
}
if (c1 == 0 && c2 ==1)
printf("valid \n");
 else
printf("invalid \n"); 

}