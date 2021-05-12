#include <stdio.h>

int main(void) {

typedef struct{
int dia, mes, ano;
} data;

int i = 1234;

printf("Tamanho de data %d\n", (int) sizeof(data));
printf("varialvel i = %d\n", i);
printf("Endereço de i %ld\n" , (long int)&i);
printf("Hexadecimal de &i %p\n" , (void *)&i);

  return 0;
}