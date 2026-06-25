#include <cs50.h>
#include <stdio.h>
int main(void)
{
  int score= get_int("score:");
   if (score>=80)
  {
    printf("grade: A\n");
  }
   else if (score>=70)
   {
   printf("grade= B\n");
   }
   else if (score>=60)
   {
     printf("grade= C\n");
   }
   else if (score>=50)
   {
    printf("grade= D\n");
   }
   else
   {
    printf("grade= F\n");
   }
}
