#include <stdio.h>

int main() {
  int numero, suma = 0;
  
  printf("Introduce un numero");
  scanf("%d",&numero);
  
  suma = numero + numero;
   
  if (suma == 0) {
      printf("Esa es la respuesta");
  }
  return 0; //Programa correcto 
}
