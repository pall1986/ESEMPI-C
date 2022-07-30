#include <stdio.h>


int main()
{
	int decimale=0; //definisco  e assegno un valore ad una variabile di tipo intero
	int *decimale1; // definisco una variabile di tipo puntatore ad intero
	printf( "%d\n",decimale); // stampo a video il valore della variabile di tipo intero
	printf( "%p\n",&decimale); // stampo a video l'indirizzo di memoria della variabile di tipo intero
	//printf("%d",decimale);
	decimale1=&decimale; //assegno l'indirizzo di memoria della varibile di tipo intero alla varibile di tipo puntatore ad intero
	printf( "%d\n",*decimale1); //stampo a video il valore della variabile di tipo puntatore ad intero
	decimale=3; // cambio valore variabile di tipo intero
	printf("Decmale vale %d\n", decimale);// stampo a video il valore della variabile di tipo intero
	printf("Decimale 1 vale %d\n", *decimale1);//stampo a video il valore della variabile di tipo puntatore ad intero
	//Il valore della variabile puntatore ad intero è cambiato.
	return 0;
}