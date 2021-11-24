#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*V hlavní funkci načtěte celé číslo n (udělejte z něj kladné číslo funkcí abs). Nesmí to být 0 nebo 1. Otestujte to. Napište funkci, která vrátí 0, pokud je načtené číslo složené, jinak vrátí 1 (prvočíslo).
a. testujte čísla od 2 .. n-1 
b. testujte čísla 2, pak lichá čísla do n-1
c. testujte čísla z b. do odmocniny z n. (Pokud chceme použít funkci pro odmocninu, musíme si připojit k programu knihovnu, která tuto funkci obsahuje: math.h , pak se funkce zavolá stejně jako funkce abs, jmenuje se sqrt.)*/

int prime_or_composite(int number)
{
    int i;
    if(number == 2)
    {
        return 1;
    }
    if(number % 2 == 0)
    {
        return 0;
    }

    for(i = 3; i <= sqrt(number); i = i + 2)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int number;
    printf("Enter a integer to check for prime or composite: ");
    scanf("%d", &number);
    number = abs(number);

    if(number == 0 || number == 1)
    {
        printf("Wrong number!!! Enter some other number than 0 or 1!");
        return 1; //the program ends because the user entered wrong number
    }
    
    if(prime_or_composite(number) == 0)
    {
        printf("%d is a composite number", number);
    }
    else{
        printf("%d is a prime number", number);
    }
    return 0;
}
