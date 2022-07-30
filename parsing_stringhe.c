#include <stdio.h>
#include  <string.h>

int main()
{
char stringa_iniziale[47]="La prima stringa è composta da : due parti!"; //Array di caratteri con dimensione prefissata
char *token = strtok(stringa_iniziale, ":");
   
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ":");
    }
return 0;
}