#include <stdio.h>

int main()
{
	int variabile1=1;
	int *variabile2=0;
	printf("La varibile 1 vale %d\n", variabile1);
	printf("La varibile 2 vale %d\n", variabile2);
	variabile2=&variabile1;
	printf("La varibile 2 ora vale %d\n", *variabile2);
	variabile1=3;
	printf("La varibile 1 vale %d\n", variabile1);
	printf("La varibile 2 vale %d\n", *variabile2);
	return 0;
}
