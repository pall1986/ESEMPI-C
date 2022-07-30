#include <string.h>
#include <stdio.h>

int main()
{
    int variabile1=255;
    int variabile2=0;
    int variabile3;

    printf("La varibile 1 vale %d\n", variabile1);
    printf("La varibile 2 vale %d\n", variabile2);
    memcpy(&variabile2,&variabile1,sizeof(variabile1)/4);
printf("La varibile 2 vale %d\n", variabile2);
memset(&variabile3,1,sizeof(variabile1)/2);
printf("La varibile 3 vale %d\n", variabile3);
   
    return 0;
}