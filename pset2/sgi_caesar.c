
//Salissou Gomna Ilham

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])

{
    if (argc != 2)
    {
        printf ("type again : ");
    }

    int k = atoi (argv[1]);

    //have the user input
    string message = get_string ("please insert the plaintext : ");

    //have the output
    printf ("ciphertext : ");

    for (int i = 0, n = strlen(message); i<n; i++)

    //verify if the caracter is alphabetic or not
    {
        if (isalpha(message[i]))

        {
            if (islower(message[i]))
        {
            printf ("%c", ((message[i] - 'a') + k)%26 + 'a');
        }

            else if (isupper(message[i]))
        {
            printf ("%c", ((message[i] - 'A')+ k)%26 + 'A');
        }

        else
        {
            printf ("%c",message[i]);
        }

        }

    }
    printf("\n");
    return 0;
}
