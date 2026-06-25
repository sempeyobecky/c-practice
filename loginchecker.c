#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    string password= get_string("password:");
   if (strcmp(password,"kisii2026")== 0)

    {
       printf("Access granted\n");
    }
 else
     {
        printf("Access denied\n");
     }
}
