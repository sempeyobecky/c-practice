#include <cs50.h>
#include <stdio.h>

int main(void)
{
int age = get_int(" age:");
char citizen = get_char("Are you a citizen? (y/n):");

if (age >= 18 && (citizen =='y' || citizen=='Y'))

{
  printf("you are elegible to vote \n");
}
else
{
    printf("you are not elegible to vote\n");
}
}
