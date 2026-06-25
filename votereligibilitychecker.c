#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("age:");
    bool is_citizen = get_int("Are you a citizen? 1 for yes , 0 for no:");

    if (age>= 18 && is_citizen)
   {
      printf("you are eligible to vote\n");
    }
    else
   {
      printf("you are not eligible to vote\n");
   }
}
