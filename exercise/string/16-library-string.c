#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3. Použití knihovny string.h (toto napište do funkce main, žádnou novou funkci nepište)
 a) připojte knihovnu string.h
 b) vytvořte proměnou řetězec a vložte do ní z klávesnice text (nějaké jméno)
 c) vypište délku tohoto řetězce
 d) definujte další proměnnou typu řetězec a zkopírujte do ní první řetězec
 f) do prvního řetězce znovu načtěte z klávesnice další jméno.
 e) vypište vzestupně podle abecedy obě jména za sebou
 g) do prvního řetězce zřetězte obě  jména z prvního a druhého řetězce, tento řetězec vypište. Pak to přepište tak, aby  v řetězci byla hodnota např. Adam a Eva

*/

int main()
{
    //b)
    char retezec[100];
    printf("Zadej jmeno: ");
    scanf("%99s", retezec);

    //c)
    printf("Delka retezce je %d", strlen(retezec));
    
    //d)
    char retezec2[100];
    strcpy(retezec2, retezec);
    
    //f)
    printf("\nZadej jmeno: ");
    scanf("%99s", retezec);

    //e)
    if (strcmp(retezec, retezec2) < 0) //porovnani
        printf("%s   %s", retezec, retezec2);
    else
        printf("%s   %s", retezec2, retezec);
    
    //g)
    strcat(retezec, retezec2);
    printf("\n%s", retezec);
    return 0;
}
