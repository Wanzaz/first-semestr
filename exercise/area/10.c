#include <stdio.h>
#include <stdlib.h>
#define MAX 200

/*
Dnes budeme pracovat s polem znaků
1. Nadefinujte si ve funkci main tři pole znaků znaky1, znaky2, znaky3 (použijte přitom symbolickou konstantu). Načtěte si z klávesnice aktuální počet prvků v polích třeba do proměnné n.
2. První pole znaků naplňte tak, že si napíšete funkci vyplnZnakem, která vezme to pole a znak a vyplní pole jen tím jedním znakem. Příklad volání: vyplnZnakem(znaky1, n, '*') - vyplní n prvků pole znakem *.
3. Funkce pro výpis (dnes bez mezery mezi prvky pole). Nezapomeňte na konci výpisu pole odřádkovat.
4. Druhé pole naplňte tak, že si napíšete funkci vyplnDvemaZnaky, která naplní pole na přeskáčku dvěma znaky. Příklad volání: vyplnDvemaZnaky(znaky2,  n,  'o',  'x') -    oxoxoxoxox...
5. Třetí pole naplňte tak, že si napíšete funkci vyplnDvemaZnakyDoPoloviny, která naplní polovinu pole jedním znakem a druhou polovinu druhým znakem.  ooooooxxxxx
6. Všechna tři pole pod sebe vypište.
*/


//funkce pro vypis prvku z pole
void vypis(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%c", a[i]);
  }
  printf("\n");
}


void vyplnZnakem (int znaky1[],int n, char znak)
{
    int i;
    for(i=0;i<n;i++)
    {
        znaky1[i]=znak;
    }
}

void vyplnDvemaZnaky (int znaky2[], int n, char znak, char znak2)
{
    int i;
    for(i=0;i<n;i+=1)
    {
        if(i%2==1)
            znaky2[i]=znak;
        else
            znaky2[i]=znak2;
    }
}



int main()
{
    char znaky1[MAX], znaky2[MAX], znaky3[MAX], znak, znak2;
    int n;
    printf("Zadej cislo n: ");
    scanf("%d", &n);
    printf("Zadej znak, kterym pole bude vyplneno:  ");

    scanf("\n%c", &znak);
    printf("Zadej druhy znak, kterym pole bude vyplneno:  ");
    scanf("\n%c", &znak2);




    vyplnZnakem(znaky1, n, znak);
    vyplnDvemaZnaky(znaky2, n, znak, znak2);

    vypis(znaky1, n);

    vypis(znaky2, n);


    return 0;
}
