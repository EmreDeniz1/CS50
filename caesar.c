#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{



string kod = get_string("Kod = ");

for ( int i = 0, n = strlen(kod) ; i < n ; i++)
{

    if ( kod[i] >= 'a' && kod[i] <= 'z')
    {
       int z = kod[i] + key;
            if ( z > 122)
            {
                z = 96 + z - 122;
                     printf("%c", (char)z);
            }
                else
                {
                    printf("%c", (char)z);
                }

    }

    else if ( kod[i] >= 'A' && kod[i] <= 'Z')
    {
       int z = kod[i] + key;
            if ( z > 90)
            {
                z = 64 + z - 90;
                     printf("%c", (char)z);
            }
                else
                {
                    printf("%c", (char)z);
                }

    }
    else
    {
        printf("%c", kod[i]);
    }

}
    printf("\n");



}