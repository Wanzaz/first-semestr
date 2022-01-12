#include <stdio.h>

int main(void) {
  FILE *soubor;
  
  soubor = fopen("soubor.txt", "w"); //w = write
  fprintf(soubor, "Toto je zapis do souboru");

  fclose(soubor);
}
