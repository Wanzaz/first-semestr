#include <stdio.h>

/*
2. Textový řetězec. Jelikož jsme neprobrali teorii, učitelé vám ji vysvětlí.
2. 1. Do nového projektu definujte dva řetězce jmeno a prijmeni tak, aby se do nich vlezl text o 20 znacích.
2. 2. Z klávesnice do těchto proměnných načti hodnoty. Nezapomeň na kontrolu počtu znaků. Nesmíme přepsat paměť, která nepřísluší definovaným řetězcům.
2. 3. Vypište větu: Jmenuji se "jmeno" "prijmeni".
2. 4. Definujte další proměnnou prijmeniJmeno typu textového řetězce, který bude mít maximálně 40 znaků. Zřetězte do něj řetězce prijmeni a jméno (samozřejmě funkcí, bez použití knihovny string.h)
2. 5. Vypište větu: Jmenuji se "prijmeniJmeno".
2.6. Napište funkci, která vezme dva řetězce a prohodí mezi nimi první písmena. "Martina", "Kopeckova" -> "Kartina", "Mopeckova".
2.7. Aplikujte funkci na řetězce prijmeni a jmeno a znovu vypište větu z bodu 2. 3.
*/


//muzes pouzit funkci sprintf() (budoucnost)
void slouceni(char prijmeni[], char jmeno[], char prijmeniJmeno[])
{
    int i=0, j=0;

    while(prijmeni[i] != '\0')
    {
        prijmeniJmeno[i] = prijmeni[i];
        i++;
    }

    while(jmeno[j] != '\0')
    {
        prijmeniJmeno[i] = jmeno[j];
        i++;
        j++;
    }

    prijmeniJmeno[i] = '\0';
}

void prehod(char pole[], char pole2[])
{
    char znak;
    znak = pole[0];
    pole[0] = pole2[0];
    pole2[0] = znak;
}

int main()
{
    char jmeno[21], prijmeni[21], prijmeniJmeno[41];

    printf("Zadej jmeno: ");
    scanf("%20s", jmeno);
    printf("Zadej jmeno: ");
    scanf("%20s", prijmeni);

    printf("Jmenuji se %s %s\n", jmeno, prijmeni);

    slouceni(prijmeni, jmeno, prijmeniJmeno);
    printf("Jmenuji se %s %s\n", jmeno, prijmeni);

    prehod(jmeno, prijmeni);
    printf("Jmenuji se %s %s\n", jmeno, prijmeni);



    return 0;
}
