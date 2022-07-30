#include <stdio.h>
#include <string.h>

int main()
{
char stringa2[47]="La prima stringa è "; //Array di caratteri con dimensione prefissata
char stringa1[]="concatenata con la seconda";//Array di caratteri con dimensione dipendente dal numero di caratteri
printf("%d\n",sizeof(stringa2));//Per ottenere la dimensione dell'array 
strcat(stringa2,stringa1);// la dimensione della stringa di destinazione deve essere maggiore della stringa sorgente
printf(stringa2);
return 0;

}