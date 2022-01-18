#include <stdio.h>
#include <stdlib.h>
#include <time.h> //nutne pro generovani nahodnych cisel

/*
Dnešní cvičení bude zaměřené na volání funkcí a orientaci v cizím programu. Všechny body (mimo bodů 1, 12, 16 a 17) proveďte pouze pomocí volání již napsaných funkcí.
Zkopírujte si z přiloženého souboru zdrojový kód. Ověřte si jeho funkčnost. S pomocí učitele si projděte kód a vysvětlete si jednotlivé řádky programu.


1. Ve funkci main nadefinujte pole celých čísel a, b, c, d, e, f o velikosti n (n je již nadefinovaná proměnná a má přiřazenou hodnotu).
2. Pole a a b vyplň náhodnými čísly.
3. Vypiš pole a i b.
4. Vyplň pole c součtem polí a a b (po jednotlivých číslech).
5. Vypiš pole c.
6. Vyplň pole d dvěma čísly 3 a 8 na přeskáčku.
7. Vypiš pole d.
8. Vyplň pole e dvěma čísly tak, že do první poloviny v poli bude číslo 5 a od druhé poloviny tam bude číslo 2.
9. Vypiš pole e.
10. Do pole f dej opačnou kopii pole a.
11. Vypiš pole f.
12. Nadefinuj (napiš) funkci vyplnCislem, která celé pole vyplní jedním číslem (parametr). 
13. Vyplň pole a čísly 1, pole b čísly 2, pole c čísly 3, pole d čísly 4, pole e čísly 5. 
14. Vytiskni pole a, b, c, d, e.
14. Pomocí volání několika funkcí vyplň pole f tak, že v něm bude součet polí a, b, c, d, e.
15. Vypiš pole f a zkontroluj si s ostatními.
16. Definuj další pole g, tentokrát o 2*n prvcích. 
17. Definuj funkci slucPole, která dvě pole o velikosti n sloučí do třetího pole o velikosti 2*n.
18. Pole g naplň sloučením polí a a c.
19. Vypiš pole g
*/

//zkusebni program na volani funkci (bude jich opravdu hodne)

void vypisPole(int p[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", p[i]);
  }
  printf("\n");
}

void nahodnePole(int p[], int n)
{
  for (int i = 0; i < n; i++)
  {
    p[i] = rand() % 50; //generovani nahodnych cisel
  }
}

void kopie(int zdroj[], int cil[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cil[i] = zdroj[i];
  }
}

void opacnaKopie(int zdroj[], int cil[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cil[i] = zdroj[n - 1 - i];
  }
}

void soucetPoli(int cil[], int zdroj1[], int zdroj2[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cil[i] = zdroj1[i] + zdroj2[i];
  }
}

void vyplnPoleDvemaCisly(int p[], int n, int cislo1, int cislo2)
{
  for (int i = 0; i < n; i = i + 2)
  {
    p[i] = cislo1;
  }
  for (int i = 1; i < n; i = i + 2)
  {
    p[i] = cislo2;
  }
}
void vyplnPoleDvemaCislyDoPoloviny(int p[], int n, int cislo1, int cislo2)
{
  for (int i = 0; i < n/2; i++)
  {
    p[i] = cislo1;
  }
  for (int i = n/2; i < n; i++)
  {
    p[i] = cislo2;
  }
}

//tady bude kod funkce z bodu 12
void vyplnCislem(int a[], int n, int parametr)
{
  int i;
  for(i=0;i<=n;i++)
  {
    a[i]=parametr;
  }
}

//18 slouceni poli
void slouceni_poli(int a[], int c[], int g[], int n)
{
    for(int i=0; i < n; i++)
    {
        g[i] = a[i];
    }

    for(int i=n; i < n*2; i++)
    {
        g[i] = c[i - n];
    }
}

int main()
{
    srand( (unsigned) time(NULL)); //nutne pro generovani nahodnych cisel
    printf("Zadej pocet prvku v poli: ");
    int n;
    scanf("%d", &n);
    // tady dopln kod

    //1
    int a[n], b[n], c[n], d[n], e[n], f[n];

    //2, 3
    nahodnePole(a,n);
    nahodnePole(b, n);
    vypisPole(a, n);
    vypisPole(b, n);

    //4, 5
    soucetPoli(c, a, b, n);
    vypisPole(c, n);

    //6, 7
    vyplnPoleDvemaCisly(d, n, 3, 8);
    vypisPole(d, n);

    //8, 9
    vyplnPoleDvemaCislyDoPoloviny(e, n, 5, 2);
    vypisPole(e, n);

    //10, 11
    opacnaKopie(a, f, n);
    vypisPole(f, n);

    //12, 13
    vyplnCislem(a, n, 1);
    vyplnCislem(b, n, 2);
    vyplnCislem(c, n, 3);
    vyplnCislem(d, n, 4);
    vyplnCislem(e, n, 5);

    //14
    vypisPole(a, n);
    vypisPole(b, n);
    vypisPole(c, n);
    vypisPole(d, n);
    vypisPole(e, n);

    soucetPoli(f, a, b, n);
    soucetPoli(f, f, c, n);
    soucetPoli(f, f, d, n);
    soucetPoli(f, f, e, n);

    //15
    vypisPole(f, n);
    printf("je to soucet\n");

    //17
    int g[2*n];

    //18 funkce na slouceni poli


    //19 napleneni pole g od a c
    slouceni_poli(a, c, g, n);
    

    //20 vypsani g
    vypisPole(g, n*2);


    printf("\nKoncim, Goog Bye...");
    return 0;
}
