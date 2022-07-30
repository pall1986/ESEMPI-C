#include <stdio.h>

typedef struct 
{
	int age;
	int tall;
	char sex[1];

	union{
struct{
	unsigned char prova:1; //LSB 
	unsigned char prova1:6;
	unsigned char prova2:1;//MSB
} pippo;
unsigned char s;
}byte;

} student;

int main()
{

student a[1];
printf("Inserisci età: \n");
scanf("%d",&a[0].age);
printf("Inserisci altezza: \n");
scanf(" %d",&a[0].tall);
printf("Inserisci sesso: \n");
scanf("%s",&a[0].sex);
a[0].byte.s=128;
printf("%d\n",a[0].age);
printf("%d\n",a[0].tall);
printf("%s\n",a[0].sex);
printf("%d\n",a[0].byte.pippo.prova);
printf("%d\n",a[0].byte.pippo.prova1);
printf("%d\n",a[0].byte.pippo.prova2);
printf("%d\n",a[0].byte.s);
printf("%p\n",&a[0]);
printf("%p\n",&a[0].byte);



return 0;
}