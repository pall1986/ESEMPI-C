#include<stdio.h>
int fun()
{
  static int count = 0; 
  //int count = 0;
  count++;
  return count;
}
  
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());// LA VARIABILE, AL SECONDO RICHIAMO DELLA FUNZIONE NON VIENE RIPORTATA A 0
  return 0;
}