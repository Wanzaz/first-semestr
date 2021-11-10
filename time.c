#include <stdio.h>
#include <stdlib.h>

/**
1. Je dán časový údaj v hodinách, minutách a sekundách. Napište funkci, která z těchto údajů vrátí počet sekund.
Př.: 1 hodina, 5 minut a 10 sekund -> 3910 sekund
**/

int amount_of_seconds(int hours, int minutes, int seconds)
{
    int number_of_seconds = 3600*hours + minutes*60 + seconds;
    return number_of_seconds;

}




int main()
{
    int hours, seconds, minutes;
    printf("Enter a number of hours: \n");
    scanf("%d", &hours);
    printf("Enter a number of minutes: \n");
    scanf("%d", &minutes);
    printf("Enter a number of secons: \n");
    scanf("%d", &seconds);
    printf("%d h %d m %d = %d s \n", hours, minutes, seconds,amount_of_seconds(hours, minutes, seconds));
    return 0;
}
