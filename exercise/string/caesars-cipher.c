#include <stdio.h>
#include <ctype.h>


void caesar (char cipher[], int shift);
void caesar_better(char cipher[], int shift);


int main () {

    char cipher[50];
    int shift;

    printf("Enter text to be encrypted IN CAPITAL LETTERS ONLY: ");
    scanf("%s", cipher);

    printf("How many shifts do you prefer? 1-26 only: ");
    scanf("%d", &shift);

    //caesar (cipher, shift);
    caesar_better (cipher, shift);

    return 0;
}

void caesar (char cipher[], int shift) {
  int i = 0;

  while (cipher[i] != '\0') {
    if ((cipher[i] + shift) >= 65 && (cipher[i] + shift) <= 90) {
      cipher[i] += (shift);
    } else {
        cipher[i] += (shift - 25);
    }
    i++;
  }
  printf("%s", cipher);
}

void caesar_better(char cipher[], int shift) {
  int i = 0;

  while (cipher[i] != '\0') {
     if (isupper(cipher[i])) {
      cipher[i] += (shift);
    } else {
          cipher[i] += (shift - ('Z' - 'A'));
    }
    i++;
  }
  printf("%s", cipher);
}
